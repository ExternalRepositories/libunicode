/**
 * This file is part of the "libunicode" project
 *   Copyright (c) 2020 Christian Parpart <christian@parpart.family>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <unicode/utf8.h>
#include <unicode/support.h>
#include <catch2/catch.hpp>

#include <fmt/format.h>

#include <array>
#include <cassert>
#include <cstdlib>
#include <variant>

using namespace std;
using namespace unicode;

std::string binstr(unsigned n)
{
    string ss;
    for (int i = 7; i >= 0; --i)
        ss += ((n & (1 << i)) != 0) ? '1' : '0';
    return ss;
}

TEST_CASE("utf8.bytes_1", "[utf8]")
{
    uint8_t constexpr C = '[';

    // encode
    uint8_t encoded{};
    unsigned const count = to_utf8(C, &encoded);
    REQUIRE(count == 1);
    CHECK(encoded == C);

    // decode
    auto state = utf8_decoder_state{};
    auto const r1 = from_utf8(state, C);
    REQUIRE(holds_alternative<Success>(r1));
    char32_t const b = get<Success>(r1).value;
    INFO(fmt::format("char32_t : 0x{:04X}", (unsigned)b));
    REQUIRE(b == C);
}

TEST_CASE("utf8.bytes_2", "[utf8]")
{
    char32_t constexpr C{ 0xF6 }; // 0xC3 0xB6, 'ö'
    INFO(fmt::format("codepoint : 0x{:04X}", (unsigned)C));

    // encode
    uint8_t actual[2] = {};
    auto const count = to_utf8(C, actual);
    INFO(fmt::format("utf8      : {:X} {:X}", actual[0], actual[1]));
    INFO(fmt::format("binary    : {} {}", binstr(actual[0]), binstr(actual[1])));
    REQUIRE(count == 2);
    CHECK(actual[0] == 0xC3);
    CHECK(actual[1] == 0xB6);

    // decode
    size_t len = 0;
    auto const a = from_utf8(actual, &len);
    REQUIRE(holds_alternative<Success>(a));
    char32_t b = get<Success>(a).value;
    INFO(fmt::format("char32_t : 0x{:04X} ==? 0x{:04X}", (unsigned)b, (unsigned)C));
    REQUIRE(b == C);
}

TEST_CASE("utf8.bytes_3", "[utf8]")
{
    // encode
    uint8_t b3[4] = {};
    auto const count = to_utf8(0x20AC, b3); // EURO sign: €
    REQUIRE(count == 3);
    CHECK(b3[0] == 0xE2);
    CHECK(b3[1] == 0x82);
    CHECK(b3[2] == 0xAC);

    INFO(fmt::format("{:02X} {:02X} {:02X}", b3[0], b3[1], b3[2]));
    INFO(fmt::format("{} {} {}", binstr(b3[0]), binstr(b3[1]), binstr(b3[2])));

    // decode
    size_t len = 0;
    auto const a = from_utf8(b3, &len);
    REQUIRE(holds_alternative<Success>(a));
    char32_t const b = get<Success>(a).value;
    INFO(fmt::format("char32_t : 0x{:04X}", (unsigned)b));
    REQUIRE(b == 0x20AC);
}

TEST_CASE("utf8.bytes_3_dash", "[utf8]")
{
    // encode
    auto constexpr codepoint = 0x251C;
    uint8_t d3[3]{0, 0, 0};
    auto const len3 = to_utf8(codepoint, d3);
    REQUIRE(len3 == 3);
    CHECK(d3[0] == 0xE2);
    CHECK(d3[1] == 0x94);
    CHECK(d3[2] == 0x9C);

    INFO(fmt::format("{:02X} {:02X} {:02X}", d3[0], d3[1], d3[2]));
    INFO(fmt::format("{} {} {}", binstr(d3[0]), binstr(d3[1]), binstr(d3[2])));

    // decode
    auto constexpr u8s = array<uint8_t, 4>{0xe2, 0x94, 0x9c, 0x61 /*a*/};
    size_t len = 0;
    auto const a = from_utf8(u8s.data(), &len);

    CHECK(len == 3);
    REQUIRE(holds_alternative<Success>(a));
    CHECK(get<Success>(a).value == codepoint);
}

TEST_CASE("utf8.from_utf8", "[utf8]")
{
    auto const a8 = string{"Hello, World!"};
    auto const a32 = from_utf8(a8);
    CHECK(a32 == U"Hello, World!");

    auto const b8 = string{(char const*) u8"😖:-)"};
    auto const b32 = from_utf8(b8);
    CHECK(b32 == U"😖:-)");
}

TEST_CASE("utf8.iter", "[utf8]")
{
    auto constexpr values = string_view{
        "["
        "\xC3\xB6"          // ö  - german o-umlaut
        "\xE2\x82\xAC"      // €  - EURO sign U+20AC
        "\xF0\x9F\x98\x80"  // 😀 - U+1F600
    };
    auto const* p = (char8_type const*) (values.data());
    auto state = utf8_decoder_state{};

    // single-byte
    auto result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Success>(result));
    REQUIRE(get<Success>(result).value == '[');

    // double-byte
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Incomplete>(result));
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Success>(result));
    REQUIRE(get<Success>(result).value == U'\u00F6'); // ö

    // 3 bytes
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Incomplete>(result));
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Incomplete>(result));
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Success>(result));
    REQUIRE(get<Success>(result).value == U'\u20AC'); // €

    // 4 bytes
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Incomplete>(result));
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Incomplete>(result));
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Incomplete>(result));
    result = from_utf8(state, *p++);
    REQUIRE(holds_alternative<Success>(result));
    REQUIRE(get<Success>(result).value == U'\U0001F600');
}
