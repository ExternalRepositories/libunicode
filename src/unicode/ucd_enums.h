/**
 * This file is part of the "libunicode" project
 *   Copyright (c) 2020-2021 Christian Parpart <christian@parpart.family>
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
#pragma once

namespace unicode {

enum class Plane {
    Basic_Multilingual_Plane = 0,
    Supplementary_Ideographic_Plane = 1,
    Supplementary_Multilingual_Plane = 2,
    Supplementary_Private_Use_Area_Plane = 3,
    Supplementary_Special_purpose_Plane = 4,
    Tertiary_Ideographic_Plane = 5,
    Unassigned = 6,
};

enum class Age {
    Unassigned = 0,
    V10_0 = 1,
    V11_0 = 2,
    V12_0 = 3,
    V12_1 = 4,
    V13_0 = 5,
    V1_1 = 6,
    V2_0 = 7,
    V2_1 = 8,
    V3_0 = 9,
    V3_1 = 10,
    V3_2 = 11,
    V4_0 = 12,
    V4_1 = 13,
    V5_0 = 14,
    V5_1 = 15,
    V5_2 = 16,
    V6_0 = 17,
    V6_1 = 18,
    V6_2 = 19,
    V6_3 = 20,
    V7_0 = 21,
    V8_0 = 22,
    V9_0 = 23,
};

enum class Bidi_Class {
    Arabic_Letter = 0,
    Arabic_Number = 1,
    Boundary_Neutral = 2,
    Common_Separator = 3,
    European_Number = 4,
    European_Separator = 5,
    European_Terminator = 6,
    First_Strong_Isolate = 7,
    Left_To_Right = 8,
    Left_To_Right_Embedding = 9,
    Left_To_Right_Isolate = 10,
    Left_To_Right_Override = 11,
    Nonspacing_Mark = 12,
    Other_Neutral = 13,
    Paragraph_Separator = 14,
    Pop_Directional_Format = 15,
    Pop_Directional_Isolate = 16,
    Right_To_Left = 17,
    Right_To_Left_Embedding = 18,
    Right_To_Left_Isolate = 19,
    Right_To_Left_Override = 20,
    Segment_Separator = 21,
    White_Space = 22,
};

enum class Bidi_Paired_Bracket_Type {
    Close = 0,
    None = 1,
    Open = 2,
};

enum class Canonical_Combining_Class {
    A = 0,
    AL = 1,
    AR = 2,
    ATA = 3,
    ATAR = 4,
    ATB = 5,
    ATBL = 6,
    B = 7,
    BL = 8,
    BR = 9,
    CCC10 = 10,
    CCC103 = 11,
    CCC107 = 12,
    CCC11 = 13,
    CCC118 = 14,
    CCC12 = 15,
    CCC122 = 16,
    CCC129 = 17,
    CCC13 = 18,
    CCC130 = 19,
    CCC132 = 20,
    CCC133 = 21,
    CCC14 = 22,
    CCC15 = 23,
    CCC16 = 24,
    CCC17 = 25,
    CCC18 = 26,
    CCC19 = 27,
    CCC20 = 28,
    CCC21 = 29,
    CCC22 = 30,
    CCC23 = 31,
    CCC24 = 32,
    CCC25 = 33,
    CCC26 = 34,
    CCC27 = 35,
    CCC28 = 36,
    CCC29 = 37,
    CCC30 = 38,
    CCC31 = 39,
    CCC32 = 40,
    CCC33 = 41,
    CCC34 = 42,
    CCC35 = 43,
    CCC36 = 44,
    CCC84 = 45,
    CCC91 = 46,
    DA = 47,
    DB = 48,
    HANR = 49,
    IS = 50,
    KV = 51,
    L = 52,
    NK = 53,
    NR = 54,
    OV = 55,
    R = 56,
    VR = 57,
};

enum class Decomposition_Type {
    Canonical = 0,
    Circle = 1,
    Compat = 2,
    Final = 3,
    Font = 4,
    Fraction = 5,
    Initial = 6,
    Isolated = 7,
    Medial = 8,
    Narrow = 9,
    Nobreak = 10,
    None = 11,
    Small = 12,
    Square = 13,
    Sub = 14,
    Super = 15,
    Vertical = 16,
    Wide = 17,
};

enum class East_Asian_Width {
    Ambiguous = 0,
    Fullwidth = 1,
    Halfwidth = 2,
    Narrow = 3,
    Neutral = 4,
    Wide = 5,
};

enum class Hangul_Syllable_Type {
    LVT_Syllable = 0,
    LV_Syllable = 1,
    Leading_Jamo = 2,
    Not_Applicable = 3,
    Trailing_Jamo = 4,
    Vowel_Jamo = 5,
};

enum class Indic_Positional_Category {
    Bottom = 0,
    Bottom_And_Left = 1,
    Bottom_And_Right = 2,
    Left = 3,
    Left_And_Right = 4,
    NA = 5,
    Overstruck = 6,
    Right = 7,
    Top = 8,
    Top_And_Bottom = 9,
    Top_And_Bottom_And_Left = 10,
    Top_And_Bottom_And_Right = 11,
    Top_And_Left = 12,
    Top_And_Left_And_Right = 13,
    Top_And_Right = 14,
    Visual_Order_Left = 15,
};

enum class Indic_Syllabic_Category {
    Avagraha = 0,
    Bindu = 1,
    Brahmi_Joining_Number = 2,
    Cantillation_Mark = 3,
    Consonant = 4,
    Consonant_Dead = 5,
    Consonant_Final = 6,
    Consonant_Head_Letter = 7,
    Consonant_Initial_Postfixed = 8,
    Consonant_Killer = 9,
    Consonant_Medial = 10,
    Consonant_Placeholder = 11,
    Consonant_Preceding_Repha = 12,
    Consonant_Prefixed = 13,
    Consonant_Subjoined = 14,
    Consonant_Succeeding_Repha = 15,
    Consonant_With_Stacker = 16,
    Gemination_Mark = 17,
    Invisible_Stacker = 18,
    Joiner = 19,
    Modifying_Letter = 20,
    Non_Joiner = 21,
    Nukta = 22,
    Number = 23,
    Number_Joiner = 24,
    Other = 25,
    Pure_Killer = 26,
    Register_Shifter = 27,
    Syllable_Modifier = 28,
    Tone_Letter = 29,
    Tone_Mark = 30,
    Virama = 31,
    Visarga = 32,
    Vowel = 33,
    Vowel_Dependent = 34,
    Vowel_Independent = 35,
};

enum class Jamo_Short_Name {
    A = 0,
    AE = 1,
    B = 2,
    BB = 3,
    BS = 4,
    C = 5,
    D = 6,
    DD = 7,
    E = 8,
    EO = 9,
    EU = 10,
    G = 11,
    GG = 12,
    GS = 13,
    H = 14,
    I = 15,
    J = 16,
    JJ = 17,
    K = 18,
    L = 19,
    LB = 20,
    LG = 21,
    LH = 22,
    LM = 23,
    LP = 24,
    LS = 25,
    LT = 26,
    M = 27,
    N = 28,
    NG = 29,
    NH = 30,
    NJ = 31,
    O = 32,
    OE = 33,
    P = 34,
    R = 35,
    S = 36,
    SS = 37,
    T = 38,
    U = 39,
    WA = 40,
    WAE = 41,
    WE = 42,
    WEO = 43,
    WI = 44,
    YA = 45,
    YAE = 46,
    YE = 47,
    YEO = 48,
    YI = 49,
    YO = 50,
    YU = 51,
};

enum class Joining_Group {
    African_Feh = 0,
    African_Noon = 1,
    African_Qaf = 2,
    Ain = 3,
    Alaph = 4,
    Alef = 5,
    Beh = 6,
    Beth = 7,
    Burushaski_Yeh_Barree = 8,
    Dal = 9,
    Dalath_Rish = 10,
    E = 11,
    Farsi_Yeh = 12,
    Fe = 13,
    Feh = 14,
    Final_Semkath = 15,
    Gaf = 16,
    Gamal = 17,
    Hah = 18,
    Hamza_On_Heh_Goal = 19,
    Hanifi_Rohingya_Kinna_Ya = 20,
    Hanifi_Rohingya_Pa = 21,
    He = 22,
    Heh = 23,
    Heh_Goal = 24,
    Heth = 25,
    Kaf = 26,
    Kaph = 27,
    Khaph = 28,
    Knotted_Heh = 29,
    Lam = 30,
    Lamadh = 31,
    Malayalam_Bha = 32,
    Malayalam_Ja = 33,
    Malayalam_Lla = 34,
    Malayalam_Llla = 35,
    Malayalam_Nga = 36,
    Malayalam_Nna = 37,
    Malayalam_Nnna = 38,
    Malayalam_Nya = 39,
    Malayalam_Ra = 40,
    Malayalam_Ssa = 41,
    Malayalam_Tta = 42,
    Manichaean_Aleph = 43,
    Manichaean_Ayin = 44,
    Manichaean_Beth = 45,
    Manichaean_Daleth = 46,
    Manichaean_Dhamedh = 47,
    Manichaean_Five = 48,
    Manichaean_Gimel = 49,
    Manichaean_Heth = 50,
    Manichaean_Hundred = 51,
    Manichaean_Kaph = 52,
    Manichaean_Lamedh = 53,
    Manichaean_Mem = 54,
    Manichaean_Nun = 55,
    Manichaean_One = 56,
    Manichaean_Pe = 57,
    Manichaean_Qoph = 58,
    Manichaean_Resh = 59,
    Manichaean_Sadhe = 60,
    Manichaean_Samekh = 61,
    Manichaean_Taw = 62,
    Manichaean_Ten = 63,
    Manichaean_Teth = 64,
    Manichaean_Thamedh = 65,
    Manichaean_Twenty = 66,
    Manichaean_Waw = 67,
    Manichaean_Yodh = 68,
    Manichaean_Zayin = 69,
    Meem = 70,
    Mim = 71,
    No_Joining_Group = 72,
    Noon = 73,
    Nun = 74,
    Nya = 75,
    Pe = 76,
    Qaf = 77,
    Qaph = 78,
    Reh = 79,
    Reversed_Pe = 80,
    Rohingya_Yeh = 81,
    Sad = 82,
    Sadhe = 83,
    Seen = 84,
    Semkath = 85,
    Shin = 86,
    Straight_Waw = 87,
    Swash_Kaf = 88,
    Syriac_Waw = 89,
    Tah = 90,
    Taw = 91,
    Teh_Marbuta = 92,
    Teth = 93,
    Waw = 94,
    Yeh = 95,
    Yeh_Barree = 96,
    Yeh_With_Tail = 97,
    Yudh = 98,
    Yudh_He = 99,
    Zain = 100,
    Zhain = 101,
};

enum class Joining_Type {
    Dual_Joining = 0,
    Join_Causing = 1,
    Left_Joining = 2,
    Non_Joining = 3,
    Right_Joining = 4,
    Transparent = 5,
};

enum class Line_Break {
    Alphabetic = 0,
    Ambiguous = 1,
    Break_After = 2,
    Break_Before = 3,
    Break_Both = 4,
    Break_Symbols = 5,
    Carriage_Return = 6,
    Close_Parenthesis = 7,
    Close_Punctuation = 8,
    Combining_Mark = 9,
    Complex_Context = 10,
    Conditional_Japanese_Starter = 11,
    Contingent_Break = 12,
    E_Base = 13,
    E_Modifier = 14,
    Exclamation = 15,
    Glue = 16,
    H2 = 17,
    H3 = 18,
    Hebrew_Letter = 19,
    Hyphen = 20,
    Ideographic = 21,
    Infix_Numeric = 22,
    Inseparable = 23,
    JL = 24,
    JT = 25,
    JV = 26,
    Line_Feed = 27,
    Mandatory_Break = 28,
    Next_Line = 29,
    Nonstarter = 30,
    Numeric = 31,
    Open_Punctuation = 32,
    Postfix_Numeric = 33,
    Prefix_Numeric = 34,
    Quotation = 35,
    Regional_Indicator = 36,
    Space = 37,
    Surrogate = 38,
    Unknown = 39,
    Word_Joiner = 40,
    ZWJ = 41,
    ZWSpace = 42,
};

enum class NFC_Quick_Check {
    Maybe = 0,
    No = 1,
    Yes = 2,
};

enum class NFKC_Quick_Check {
    Maybe = 0,
    No = 1,
    Yes = 2,
};

enum class Numeric_Type {
    Decimal = 0,
    Digit = 1,
    None = 2,
    Numeric = 3,
};

enum class Sentence_Break {
    ATerm = 0,
    CR = 1,
    Close = 2,
    Extend = 3,
    Format = 4,
    LF = 5,
    Lower = 6,
    Numeric = 7,
    OLetter = 8,
    Other = 9,
    SContinue = 10,
    STerm = 11,
    Sep = 12,
    Sp = 13,
    Upper = 14,
};

enum class Vertical_Orientation {
    Rotated = 0,
    Transformed_Rotated = 1,
    Transformed_Upright = 2,
    Upright = 3,
};

enum class Word_Break {
    ALetter = 0,
    CR = 1,
    Double_Quote = 2,
    E_Base = 3,
    E_Base_GAZ = 4,
    E_Modifier = 5,
    Extend = 6,
    ExtendNumLet = 7,
    Format = 8,
    Glue_After_Zwj = 9,
    Hebrew_Letter = 10,
    Katakana = 11,
    LF = 12,
    MidLetter = 13,
    MidNum = 14,
    MidNumLet = 15,
    Newline = 16,
    Numeric = 17,
    Other = 18,
    Regional_Indicator = 19,
    Single_Quote = 20,
    WSegSpace = 21,
    ZWJ = 22,
};

enum class Core_Property {
    Alphabetic = 0,
    Case_Ignorable = 1,
    Cased = 2,
    Changes_When_Casefolded = 3,
    Changes_When_Casemapped = 4,
    Changes_When_Lowercased = 5,
    Changes_When_Titlecased = 6,
    Changes_When_Uppercased = 7,
    Default_Ignorable_Code_Point = 8,
    Grapheme_Base = 9,
    Grapheme_Extend = 10,
    Grapheme_Link = 11,
    ID_Continue = 12,
    ID_Start = 13,
    Lowercase = 14,
    Math = 15,
    Uppercase = 16,
    XID_Continue = 17,
    XID_Start = 18,
};

enum class General_Category {
    Unspecified = 0,
    Close_Punctuation = 1,
    Connector_Punctuation = 2,
    Control = 3,
    Currency_Symbol = 4,
    Dash_Punctuation = 5,
    Decimal_Number = 6,
    Enclosing_Mark = 7,
    Final_Punctuation = 8,
    Format = 9,
    Initial_Punctuation = 10,
    Letter_Number = 11,
    Line_Separator = 12,
    Lowercase_Letter = 13,
    Math_Symbol = 14,
    Modifier_Letter = 15,
    Modifier_Symbol = 16,
    Nonspacing_Mark = 17,
    Open_Punctuation = 18,
    Other_Letter = 19,
    Other_Number = 20,
    Other_Punctuation = 21,
    Other_Symbol = 22,
    Paragraph_Separator = 23,
    Private_Use = 24,
    Space_Separator = 25,
    Spacing_Mark = 26,
    Surrogate = 27,
    Titlecase_Letter = 28,
    Unassigned = 29,
    Uppercase_Letter = 30,
};

enum class Script {
    Invalid = -1,
    Unknown = 0,
    Common = 1,
    Adlam = 2,
    Ahom = 3,
    Anatolian_Hieroglyphs = 4,
    Arabic = 5,
    Armenian = 6,
    Avestan = 7,
    Balinese = 8,
    Bamum = 9,
    Bassa_Vah = 10,
    Batak = 11,
    Bengali = 12,
    Bhaiksuki = 13,
    Bopomofo = 14,
    Brahmi = 15,
    Braille = 16,
    Buginese = 17,
    Buhid = 18,
    Canadian_Aboriginal = 19,
    Carian = 20,
    Caucasian_Albanian = 21,
    Chakma = 22,
    Cham = 23,
    Cherokee = 24,
    Chorasmian = 25,
    Coptic = 26,
    Cuneiform = 27,
    Cypriot = 28,
    Cyrillic = 29,
    Deseret = 30,
    Devanagari = 31,
    Dives_Akuru = 32,
    Dogra = 33,
    Duployan = 34,
    Egyptian_Hieroglyphs = 35,
    Elbasan = 36,
    Elymaic = 37,
    Ethiopic = 38,
    Georgian = 39,
    Glagolitic = 40,
    Gothic = 41,
    Grantha = 42,
    Greek = 43,
    Gujarati = 44,
    Gunjala_Gondi = 45,
    Gurmukhi = 46,
    Han = 47,
    Hangul = 48,
    Hanifi_Rohingya = 49,
    Hanunoo = 50,
    Hatran = 51,
    Hebrew = 52,
    Hiragana = 53,
    Imperial_Aramaic = 54,
    Inherited = 55,
    Inscriptional_Pahlavi = 56,
    Inscriptional_Parthian = 57,
    Javanese = 58,
    Kaithi = 59,
    Kannada = 60,
    Katakana = 61,
    Kayah_Li = 62,
    Kharoshthi = 63,
    Khitan_Small_Script = 64,
    Khmer = 65,
    Khojki = 66,
    Khudawadi = 67,
    Lao = 68,
    Latin = 69,
    Lepcha = 70,
    Limbu = 71,
    Linear_A = 72,
    Linear_B = 73,
    Lisu = 74,
    Lycian = 75,
    Lydian = 76,
    Mahajani = 77,
    Makasar = 78,
    Malayalam = 79,
    Mandaic = 80,
    Manichaean = 81,
    Marchen = 82,
    Masaram_Gondi = 83,
    Medefaidrin = 84,
    Meetei_Mayek = 85,
    Mende_Kikakui = 86,
    Meroitic_Cursive = 87,
    Meroitic_Hieroglyphs = 88,
    Miao = 89,
    Modi = 90,
    Mongolian = 91,
    Mro = 92,
    Multani = 93,
    Myanmar = 94,
    Nabataean = 95,
    Nandinagari = 96,
    New_Tai_Lue = 97,
    Newa = 98,
    Nko = 99,
    Nushu = 100,
    Nyiakeng_Puachue_Hmong = 101,
    Ogham = 102,
    Ol_Chiki = 103,
    Old_Hungarian = 104,
    Old_Italic = 105,
    Old_North_Arabian = 106,
    Old_Permic = 107,
    Old_Persian = 108,
    Old_Sogdian = 109,
    Old_South_Arabian = 110,
    Old_Turkic = 111,
    Oriya = 112,
    Osage = 113,
    Osmanya = 114,
    Pahawh_Hmong = 115,
    Palmyrene = 116,
    Pau_Cin_Hau = 117,
    Phags_Pa = 118,
    Phoenician = 119,
    Psalter_Pahlavi = 120,
    Rejang = 121,
    Runic = 122,
    Samaritan = 123,
    Saurashtra = 124,
    Sharada = 125,
    Shavian = 126,
    Siddham = 127,
    SignWriting = 128,
    Sinhala = 129,
    Sogdian = 130,
    Sora_Sompeng = 131,
    Soyombo = 132,
    Sundanese = 133,
    Syloti_Nagri = 134,
    Syriac = 135,
    Tagalog = 136,
    Tagbanwa = 137,
    Tai_Le = 138,
    Tai_Tham = 139,
    Tai_Viet = 140,
    Takri = 141,
    Tamil = 142,
    Tangut = 143,
    Telugu = 144,
    Thaana = 145,
    Thai = 146,
    Tibetan = 147,
    Tifinagh = 148,
    Tirhuta = 149,
    Ugaritic = 150,
    Vai = 151,
    Wancho = 152,
    Warang_Citi = 153,
    Yezidi = 154,
    Yi = 155,
    Zanabazar_Square = 156,
};

enum class Block {
    Unspecified = 0,
    Adlam = 1,
    Aegean_Numbers = 2,
    Ahom = 3,
    Alchemical_Symbols = 4,
    Alphabetic_Presentation_Forms = 5,
    Anatolian_Hieroglyphs = 6,
    Ancient_Greek_Musical_Notation = 7,
    Ancient_Greek_Numbers = 8,
    Ancient_Symbols = 9,
    Arabic = 10,
    Arabic_Extended_A = 11,
    Arabic_Mathematical_Alphabetic_Symbols = 12,
    Arabic_Presentation_Forms_A = 13,
    Arabic_Presentation_Forms_B = 14,
    Arabic_Supplement = 15,
    Armenian = 16,
    Arrows = 17,
    Avestan = 18,
    Balinese = 19,
    Bamum = 20,
    Bamum_Supplement = 21,
    Basic_Latin = 22,
    Bassa_Vah = 23,
    Batak = 24,
    Bengali = 25,
    Bhaiksuki = 26,
    Block_Elements = 27,
    Bopomofo = 28,
    Bopomofo_Extended = 29,
    Box_Drawing = 30,
    Brahmi = 31,
    Braille_Patterns = 32,
    Buginese = 33,
    Buhid = 34,
    Byzantine_Musical_Symbols = 35,
    CJK_Compatibility = 36,
    CJK_Compatibility_Forms = 37,
    CJK_Compatibility_Ideographs = 38,
    CJK_Compatibility_Ideographs_Supplement = 39,
    CJK_Radicals_Supplement = 40,
    CJK_Strokes = 41,
    CJK_Symbols_and_Punctuation = 42,
    CJK_Unified_Ideographs = 43,
    CJK_Unified_Ideographs_Extension_A = 44,
    CJK_Unified_Ideographs_Extension_B = 45,
    CJK_Unified_Ideographs_Extension_C = 46,
    CJK_Unified_Ideographs_Extension_D = 47,
    CJK_Unified_Ideographs_Extension_E = 48,
    CJK_Unified_Ideographs_Extension_F = 49,
    CJK_Unified_Ideographs_Extension_G = 50,
    Carian = 51,
    Caucasian_Albanian = 52,
    Chakma = 53,
    Cham = 54,
    Cherokee = 55,
    Cherokee_Supplement = 56,
    Chess_Symbols = 57,
    Chorasmian = 58,
    Combining_Diacritical_Marks = 59,
    Combining_Diacritical_Marks_Extended = 60,
    Combining_Diacritical_Marks_Supplement = 61,
    Combining_Diacritical_Marks_for_Symbols = 62,
    Combining_Half_Marks = 63,
    Common_Indic_Number_Forms = 64,
    Control_Pictures = 65,
    Coptic = 66,
    Coptic_Epact_Numbers = 67,
    Counting_Rod_Numerals = 68,
    Cuneiform = 69,
    Cuneiform_Numbers_and_Punctuation = 70,
    Currency_Symbols = 71,
    Cypriot_Syllabary = 72,
    Cyrillic = 73,
    Cyrillic_Extended_A = 74,
    Cyrillic_Extended_B = 75,
    Cyrillic_Extended_C = 76,
    Cyrillic_Supplement = 77,
    Deseret = 78,
    Devanagari = 79,
    Devanagari_Extended = 80,
    Dingbats = 81,
    Dives_Akuru = 82,
    Dogra = 83,
    Domino_Tiles = 84,
    Duployan = 85,
    Early_Dynastic_Cuneiform = 86,
    Egyptian_Hieroglyph_Format_Controls = 87,
    Egyptian_Hieroglyphs = 88,
    Elbasan = 89,
    Elymaic = 90,
    Emoticons = 91,
    Enclosed_Alphanumeric_Supplement = 92,
    Enclosed_Alphanumerics = 93,
    Enclosed_CJK_Letters_and_Months = 94,
    Enclosed_Ideographic_Supplement = 95,
    Ethiopic = 96,
    Ethiopic_Extended = 97,
    Ethiopic_Extended_A = 98,
    Ethiopic_Supplement = 99,
    General_Punctuation = 100,
    Geometric_Shapes = 101,
    Geometric_Shapes_Extended = 102,
    Georgian = 103,
    Georgian_Extended = 104,
    Georgian_Supplement = 105,
    Glagolitic = 106,
    Glagolitic_Supplement = 107,
    Gothic = 108,
    Grantha = 109,
    Greek_Extended = 110,
    Greek_and_Coptic = 111,
    Gujarati = 112,
    Gunjala_Gondi = 113,
    Gurmukhi = 114,
    Halfwidth_and_Fullwidth_Forms = 115,
    Hangul_Compatibility_Jamo = 116,
    Hangul_Jamo = 117,
    Hangul_Jamo_Extended_A = 118,
    Hangul_Jamo_Extended_B = 119,
    Hangul_Syllables = 120,
    Hanifi_Rohingya = 121,
    Hanunoo = 122,
    Hatran = 123,
    Hebrew = 124,
    High_Private_Use_Surrogates = 125,
    High_Surrogates = 126,
    Hiragana = 127,
    IPA_Extensions = 128,
    Ideographic_Description_Characters = 129,
    Ideographic_Symbols_and_Punctuation = 130,
    Imperial_Aramaic = 131,
    Indic_Siyaq_Numbers = 132,
    Inscriptional_Pahlavi = 133,
    Inscriptional_Parthian = 134,
    Javanese = 135,
    Kaithi = 136,
    Kana_Extended_A = 137,
    Kana_Supplement = 138,
    Kanbun = 139,
    Kangxi_Radicals = 140,
    Kannada = 141,
    Katakana = 142,
    Katakana_Phonetic_Extensions = 143,
    Kayah_Li = 144,
    Kharoshthi = 145,
    Khitan_Small_Script = 146,
    Khmer = 147,
    Khmer_Symbols = 148,
    Khojki = 149,
    Khudawadi = 150,
    Lao = 151,
    Latin_Extended_Additional = 152,
    Latin_Extended_A = 153,
    Latin_Extended_B = 154,
    Latin_Extended_C = 155,
    Latin_Extended_D = 156,
    Latin_Extended_E = 157,
    Latin_1_Supplement = 158,
    Lepcha = 159,
    Letterlike_Symbols = 160,
    Limbu = 161,
    Linear_A = 162,
    Linear_B_Ideograms = 163,
    Linear_B_Syllabary = 164,
    Lisu = 165,
    Lisu_Supplement = 166,
    Low_Surrogates = 167,
    Lycian = 168,
    Lydian = 169,
    Mahajani = 170,
    Mahjong_Tiles = 171,
    Makasar = 172,
    Malayalam = 173,
    Mandaic = 174,
    Manichaean = 175,
    Marchen = 176,
    Masaram_Gondi = 177,
    Mathematical_Alphanumeric_Symbols = 178,
    Mathematical_Operators = 179,
    Mayan_Numerals = 180,
    Medefaidrin = 181,
    Meetei_Mayek = 182,
    Meetei_Mayek_Extensions = 183,
    Mende_Kikakui = 184,
    Meroitic_Cursive = 185,
    Meroitic_Hieroglyphs = 186,
    Miao = 187,
    Miscellaneous_Mathematical_Symbols_A = 188,
    Miscellaneous_Mathematical_Symbols_B = 189,
    Miscellaneous_Symbols = 190,
    Miscellaneous_Symbols_and_Arrows = 191,
    Miscellaneous_Symbols_and_Pictographs = 192,
    Miscellaneous_Technical = 193,
    Modi = 194,
    Modifier_Tone_Letters = 195,
    Mongolian = 196,
    Mongolian_Supplement = 197,
    Mro = 198,
    Multani = 199,
    Musical_Symbols = 200,
    Myanmar = 201,
    Myanmar_Extended_A = 202,
    Myanmar_Extended_B = 203,
    NKo = 204,
    Nabataean = 205,
    Nandinagari = 206,
    New_Tai_Lue = 207,
    Newa = 208,
    Number_Forms = 209,
    Nushu = 210,
    Nyiakeng_Puachue_Hmong = 211,
    Ogham = 212,
    Ol_Chiki = 213,
    Old_Hungarian = 214,
    Old_Italic = 215,
    Old_North_Arabian = 216,
    Old_Permic = 217,
    Old_Persian = 218,
    Old_Sogdian = 219,
    Old_South_Arabian = 220,
    Old_Turkic = 221,
    Optical_Character_Recognition = 222,
    Oriya = 223,
    Ornamental_Dingbats = 224,
    Osage = 225,
    Osmanya = 226,
    Ottoman_Siyaq_Numbers = 227,
    Pahawh_Hmong = 228,
    Palmyrene = 229,
    Pau_Cin_Hau = 230,
    Phags_pa = 231,
    Phaistos_Disc = 232,
    Phoenician = 233,
    Phonetic_Extensions = 234,
    Phonetic_Extensions_Supplement = 235,
    Playing_Cards = 236,
    Private_Use_Area = 237,
    Psalter_Pahlavi = 238,
    Rejang = 239,
    Rumi_Numeral_Symbols = 240,
    Runic = 241,
    Samaritan = 242,
    Saurashtra = 243,
    Sharada = 244,
    Shavian = 245,
    Shorthand_Format_Controls = 246,
    Siddham = 247,
    Sinhala = 248,
    Sinhala_Archaic_Numbers = 249,
    Small_Form_Variants = 250,
    Small_Kana_Extension = 251,
    Sogdian = 252,
    Sora_Sompeng = 253,
    Soyombo = 254,
    Spacing_Modifier_Letters = 255,
    Specials = 256,
    Sundanese = 257,
    Sundanese_Supplement = 258,
    Superscripts_and_Subscripts = 259,
    Supplemental_Arrows_A = 260,
    Supplemental_Arrows_B = 261,
    Supplemental_Arrows_C = 262,
    Supplemental_Mathematical_Operators = 263,
    Supplemental_Punctuation = 264,
    Supplemental_Symbols_and_Pictographs = 265,
    Supplementary_Private_Use_Area_A = 266,
    Supplementary_Private_Use_Area_B = 267,
    Sutton_SignWriting = 268,
    Syloti_Nagri = 269,
    Symbols_and_Pictographs_Extended_A = 270,
    Symbols_for_Legacy_Computing = 271,
    Syriac = 272,
    Syriac_Supplement = 273,
    Tagalog = 274,
    Tagbanwa = 275,
    Tags = 276,
    Tai_Le = 277,
    Tai_Tham = 278,
    Tai_Viet = 279,
    Tai_Xuan_Jing_Symbols = 280,
    Takri = 281,
    Tamil = 282,
    Tamil_Supplement = 283,
    Tangut = 284,
    Tangut_Components = 285,
    Tangut_Supplement = 286,
    Telugu = 287,
    Thaana = 288,
    Thai = 289,
    Tibetan = 290,
    Tifinagh = 291,
    Tirhuta = 292,
    Transport_and_Map_Symbols = 293,
    Ugaritic = 294,
    Unified_Canadian_Aboriginal_Syllabics = 295,
    Unified_Canadian_Aboriginal_Syllabics_Extended = 296,
    Vai = 297,
    Variation_Selectors = 298,
    Variation_Selectors_Supplement = 299,
    Vedic_Extensions = 300,
    Vertical_Forms = 301,
    Wancho = 302,
    Warang_Citi = 303,
    Yezidi = 304,
    Yi_Radicals = 305,
    Yi_Syllables = 306,
    Yijing_Hexagram_Symbols = 307,
    Zanabazar_Square = 308,
};

enum class Grapheme_Cluster_Break {
    CR = 0,
    Control = 1,
    Extend = 2,
    L = 3,
    LF = 4,
    LV = 5,
    LVT = 6,
    Prepend = 7,
    Regional_Indicator = 8,
    SpacingMark = 9,
    T = 10,
    V = 11,
    ZWJ = 12,
};

enum class EastAsianWidth {
    Ambiguous = 0,
    FullWidth = 1,
    HalfWidth = 2,
    Neutral = 3,
    Narrow = 4,
    Wide = 5,
    Unspecified = 6,
};

} // end namespace
