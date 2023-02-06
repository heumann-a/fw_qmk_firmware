// Copyright 2022 Framework Computer
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "drivers/led/issi/is31fl3741.h"

// TODO: Should have attribute __flash. But won't compile if I add it
const is31_led g_is31_leds[LED_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *    driver
 *    |  LED address
 *    |  | */
    {0, CS1_SW1}, // LED 1
    {0, CS1_SW2}, // LED 2
    {0, CS1_SW3}, // LED 3
    {0, CS1_SW4}, // LED 4
    {0, CS1_SW5}, // LED 5
    {0, CS1_SW6}, // LED 6
    {0, CS1_SW7}, // LED 7
    {0, CS1_SW8}, // LED 8
    {0, CS1_SW9}, // LED 9
    {0, CS2_SW1}, // LED 10
    {0, CS2_SW2}, // LED 11
    {0, CS2_SW3}, // LED 12
    {0, CS2_SW4}, // LED 13
    {0, CS2_SW5}, // LED 14
    {0, CS2_SW6}, // LED 15
    {0, CS2_SW7}, // LED 16
    {0, CS2_SW8}, // LED 17
    {0, CS2_SW9}, // LED 18
    {0, CS3_SW1}, // LED 19
    {0, CS3_SW2}, // LED 20
    {0, CS3_SW3}, // LED 21
    {0, CS3_SW4}, // LED 22
    {0, CS3_SW5}, // LED 23
    {0, CS3_SW6}, // LED 24
    {0, CS3_SW7}, // LED 25
    {0, CS3_SW8}, // LED 26
    {0, CS3_SW9}, // LED 27
    {0, CS4_SW1}, // LED 28
    {0, CS4_SW2}, // LED 29
    {0, CS4_SW3}, // LED 30
    {0, CS4_SW4}, // LED 31
    {0, CS4_SW5}, // LED 32
    {0, CS4_SW6}, // LED 33
    {0, CS4_SW7}, // LED 34
    {0, CS4_SW8}, // LED 35
    {0, CS4_SW9}, // LED 36
    {0, CS5_SW1}, // LED 37
    {0, CS5_SW2}, // LED 38
    {0, CS5_SW3}, // LED 39
    {0, CS5_SW4}, // LED 40
    {0, CS5_SW5}, // LED 41
    {0, CS5_SW6}, // LED 42
    {0, CS5_SW7}, // LED 43
    {0, CS5_SW8}, // LED 44
    {0, CS5_SW9}, // LED 45
    {0, CS6_SW1}, // LED 46
    {0, CS6_SW2}, // LED 47
    {0, CS6_SW3}, // LED 48
    {0, CS6_SW4}, // LED 49
    {0, CS6_SW5}, // LED 50
    {0, CS6_SW6}, // LED 51
    {0, CS6_SW7}, // LED 52
    {0, CS6_SW8}, // LED 53
    {0, CS6_SW9}, // LED 54
    {0, CS7_SW1}, // LED 55
    {0, CS7_SW2}, // LED 56
    {0, CS7_SW3}, // LED 57
    {0, CS7_SW4}, // LED 58
    {0, CS7_SW5}, // LED 59
    {0, CS7_SW6}, // LED 60
    {0, CS7_SW7}, // LED 61
    {0, CS7_SW8}, // LED 62
    {0, CS7_SW9}, // LED 63
    {0, CS8_SW1}, // LED 64
    {0, CS8_SW2}, // LED 65
    {0, CS8_SW3}, // LED 66
    {0, CS8_SW4}, // LED 67
    {0, CS8_SW5}, // LED 68
    {0, CS8_SW6}, // LED 69
    {0, CS8_SW7}, // LED 70
    {0, CS8_SW8}, // LED 71
    {0, CS8_SW9}, // LED 72
    {0, CS9_SW1}, // LED 73
    {0, CS9_SW2}, // LED 74
    {0, CS9_SW3}, // LED 75
    {0, CS9_SW4}, // LED 76
    {0, CS9_SW5}, // LED 77
    {0, CS9_SW6}, // LED 78
    {0, CS9_SW7}, // LED 79
    {0, CS9_SW8}, // LED 80
    {0, CS9_SW9}, // LED 81
    {0, CS10_SW1}, // LED 82
    {0, CS10_SW2}, // LED 83
    {0, CS10_SW3}, // LED 84
    {0, CS10_SW4}, // LED 85
    {0, CS10_SW5}, // LED 86
    {0, CS10_SW6}, // LED 87
    {0, CS10_SW7}, // LED 88
    {0, CS10_SW8}, // LED 89
    {0, CS10_SW9}, // LED 90
    {0, CS11_SW1}, // LED 91
    {0, CS11_SW2}, // LED 92
    {0, CS11_SW3}, // LED 93
    {0, CS11_SW4}, // LED 94
    {0, CS11_SW5}, // LED 95
    {0, CS11_SW6}, // LED 96
    {0, CS11_SW7}, // LED 97
    {0, CS11_SW8}, // LED 98
    {0, CS11_SW9}, // LED 99
    {0, CS12_SW1}, // LED 100
    {0, CS12_SW2}, // LED 101
    {0, CS12_SW3}, // LED 102
    {0, CS12_SW4}, // LED 103
    {0, CS12_SW5}, // LED 104
    {0, CS12_SW6}, // LED 105
    {0, CS12_SW7}, // LED 106
    {0, CS12_SW8}, // LED 107
    {0, CS12_SW9}, // LED 108
    {0, CS13_SW1}, // LED 109
    {0, CS13_SW2}, // LED 110
    {0, CS13_SW3}, // LED 111
    {0, CS13_SW4}, // LED 112
    {0, CS13_SW5}, // LED 113
    {0, CS13_SW6}, // LED 114
    {0, CS13_SW7}, // LED 115
    {0, CS13_SW8}, // LED 116
    {0, CS13_SW9}, // LED 117
    {0, CS14_SW1}, // LED 118
    {0, CS14_SW2}, // LED 119
    {0, CS14_SW3}, // LED 120
    {0, CS14_SW4}, // LED 121
    {0, CS14_SW5}, // LED 122
    {0, CS14_SW6}, // LED 123
    {0, CS14_SW7}, // LED 124
    {0, CS14_SW8}, // LED 125
    {0, CS14_SW9}, // LED 126
    {0, CS15_SW1}, // LED 127
    {0, CS15_SW2}, // LED 128
    {0, CS15_SW3}, // LED 129
    {0, CS15_SW4}, // LED 130
    {0, CS15_SW5}, // LED 131
    {0, CS15_SW6}, // LED 132
    {0, CS15_SW7}, // LED 133
    {0, CS15_SW8}, // LED 134
    {0, CS15_SW9}, // LED 135
    {0, CS16_SW1}, // LED 136
    {0, CS16_SW2}, // LED 137
    {0, CS16_SW3}, // LED 138
    {0, CS16_SW4}, // LED 139
    {0, CS16_SW5}, // LED 140
    {0, CS16_SW6}, // LED 141
    {0, CS16_SW7}, // LED 142
    {0, CS16_SW8}, // LED 143
    {0, CS16_SW9}, // LED 144
    {0, CS17_SW1}, // LED 145
    {0, CS17_SW2}, // LED 146
    {0, CS17_SW3}, // LED 147
    {0, CS17_SW4}, // LED 148
    {0, CS17_SW5}, // LED 149
    {0, CS17_SW6}, // LED 150
    {0, CS17_SW7}, // LED 151
    {0, CS17_SW8}, // LED 152
    {0, CS17_SW9}, // LED 153
    {0, CS18_SW1}, // LED 154
    {0, CS18_SW2}, // LED 155
    {0, CS18_SW3}, // LED 156
    {0, CS18_SW4}, // LED 157
    {0, CS18_SW5}, // LED 158
    {0, CS18_SW6}, // LED 159
    {0, CS18_SW7}, // LED 160
    {0, CS18_SW8}, // LED 161
    {0, CS18_SW9}, // LED 162
    {0, CS19_SW1}, // LED 163
    {0, CS19_SW2}, // LED 164
    {0, CS19_SW3}, // LED 165
    {0, CS19_SW4}, // LED 166
    {0, CS19_SW5}, // LED 167
    {0, CS19_SW6}, // LED 168
    {0, CS19_SW7}, // LED 169
    {0, CS19_SW8}, // LED 170
    {0, CS19_SW9}, // LED 171
    {0, CS20_SW1}, // LED 172
    {0, CS20_SW2}, // LED 173
    {0, CS20_SW3}, // LED 174
    {0, CS20_SW4}, // LED 175
    {0, CS20_SW5}, // LED 176
    {0, CS20_SW6}, // LED 177
    {0, CS20_SW7}, // LED 178
    {0, CS20_SW8}, // LED 179
    {0, CS20_SW9}, // LED 180
    {0, CS21_SW1}, // LED 181
    {0, CS21_SW2}, // LED 182
    {0, CS21_SW3}, // LED 183
    {0, CS21_SW4}, // LED 184
    {0, CS21_SW5}, // LED 185
    {0, CS21_SW6}, // LED 186
    {0, CS21_SW7}, // LED 187
    {0, CS21_SW8}, // LED 188
    {0, CS21_SW9}, // LED 189
    {0, CS22_SW1}, // LED 190
    {0, CS22_SW2}, // LED 191
    {0, CS22_SW3}, // LED 192
    {0, CS22_SW4}, // LED 193
    {0, CS22_SW5}, // LED 194
    {0, CS22_SW6}, // LED 195
    {0, CS22_SW7}, // LED 196
    {0, CS22_SW8}, // LED 197
    {0, CS22_SW9}, // LED 198
    {0, CS23_SW1}, // LED 199
    {0, CS23_SW2}, // LED 200
    {0, CS23_SW3}, // LED 201
    {0, CS23_SW4}, // LED 202
    {0, CS23_SW5}, // LED 203
    {0, CS23_SW6}, // LED 204
    {0, CS23_SW7}, // LED 205
    {0, CS23_SW8}, // LED 206
    {0, CS23_SW9}, // LED 207
    {0, CS24_SW1}, // LED 208
    {0, CS24_SW2}, // LED 209
    {0, CS24_SW3}, // LED 210
    {0, CS24_SW4}, // LED 211
    {0, CS24_SW5}, // LED 212
    {0, CS24_SW6}, // LED 213
    {0, CS24_SW7}, // LED 214
    {0, CS24_SW8}, // LED 215
    {0, CS24_SW9}, // LED 216
    {0, CS25_SW1}, // LED 217
    {0, CS25_SW2}, // LED 218
    {0, CS25_SW3}, // LED 219
    {0, CS25_SW4}, // LED 220
    {0, CS25_SW5}, // LED 221
    {0, CS25_SW6}, // LED 222
    {0, CS25_SW7}, // LED 223
    {0, CS25_SW8}, // LED 224
    {0, CS25_SW9}, // LED 225
    {0, CS26_SW1}, // LED 226
    {0, CS26_SW2}, // LED 227
    {0, CS26_SW3}, // LED 228
    {0, CS26_SW4}, // LED 229
    {0, CS26_SW5}, // LED 230
    {0, CS26_SW6}, // LED 231
    {0, CS26_SW7}, // LED 232
    {0, CS26_SW8}, // LED 233
    {0, CS26_SW9}, // LED 234
    {0, CS27_SW1}, // LED 235
    {0, CS27_SW2}, // LED 236
    {0, CS27_SW3}, // LED 237
    {0, CS27_SW4}, // LED 238
    {0, CS27_SW5}, // LED 239
    {0, CS27_SW6}, // LED 240
    {0, CS27_SW7}, // LED 241
    {0, CS27_SW8}, // LED 242
    {0, CS27_SW9}, // LED 243
    {0, CS28_SW1}, // LED 244
    {0, CS28_SW2}, // LED 245
    {0, CS28_SW3}, // LED 246
    {0, CS28_SW4}, // LED 247
    {0, CS28_SW5}, // LED 248
    {0, CS28_SW6}, // LED 249
    {0, CS28_SW7}, // LED 250
    {0, CS28_SW8}, // LED 251
    {0, CS28_SW9}, // LED 252
    {0, CS29_SW1}, // LED 253
    {0, CS29_SW2}, // LED 254
//    {0, CS29_SW3}, // LED 255
//    {0, CS29_SW4}, // LED 256
//    {0, CS29_SW5}, // LED 257
//    {0, CS29_SW6}, // LED 258
//    {0, CS29_SW7}, // LED 259
//    {0, CS29_SW8}, // LED 260
//    {0, CS29_SW9}, // LED 261
//    {0, CS30_SW1}, // LED 262
//    {0, CS30_SW2}, // LED 263
//    {0, CS30_SW3}, // LED 264
//    {0, CS30_SW4}, // LED 265
//    {0, CS30_SW5}, // LED 266
//    {0, CS30_SW6}, // LED 267
//    {0, CS30_SW7}, // LED 268
//    {0, CS30_SW8}, // LED 269
//    {0, CS30_SW9}, // LED 270
//    {0, CS31_SW1}, // LED 271
//    {0, CS31_SW2}, // LED 272
//    {0, CS31_SW3}, // LED 273
//    {0, CS31_SW4}, // LED 274
//    {0, CS31_SW5}, // LED 275
//    {0, CS31_SW6}, // LED 276
//    {0, CS31_SW7}, // LED 277
//    {0, CS31_SW8}, // LED 278
//    {0, CS31_SW9}, // LED 279
//    {0, CS32_SW1}, // LED 280
//    {0, CS32_SW2}, // LED 281
//    {0, CS32_SW3}, // LED 282
//    {0, CS32_SW4}, // LED 283
//    {0, CS32_SW5}, // LED 284
//    {0, CS32_SW6}, // LED 285
//    {0, CS32_SW7}, // LED 286
//    {0, CS32_SW8}, // LED 287
//    {0, CS32_SW9}, // LED 288
//    {0, CS33_SW1}, // LED 289
//    {0, CS33_SW2}, // LED 290
//    {0, CS33_SW3}, // LED 291
//    {0, CS33_SW4}, // LED 292
//    {0, CS33_SW5}, // LED 293
//    {0, CS33_SW6}, // LED 294
//    {0, CS33_SW7}, // LED 295
//    {0, CS33_SW8}, // LED 296
//    {0, CS33_SW9}, // LED 297
//    {0, CS34_SW1}, // LED 298
//    {0, CS34_SW2}, // LED 299
//    {0, CS34_SW3}, // LED 300
//    {0, CS34_SW4}, // LED 301
//    {0, CS34_SW5}, // LED 302
//    {0, CS34_SW6}, // LED 303
//    {0, CS34_SW7}, // LED 304
//    {0, CS34_SW8}, // LED 305
//    {0, CS34_SW9}, // LED 306
};

// TODO: Might need to offset LED255 and after
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {     0,      1,      2,      3,      4,      5,      6,      7,      8, },
  {     9,     10,     11,     12,     13,     14,     15,     16,     17, },
  {    18,     19,     20,     21,     22,     23,     24,     25,     26, },
  {    27,     28,     29,     30,     31,     32,     33,     34,     35, },
  {    36,     37,     38,     39,     40,     41,     42,     43,     44, },
  {    45,     46,     47,     48,     49,     50,     51,     52,     53, },
  {    54,     55,     56,     57,     58,     59,     60,     61,     62, },
  {    63,     64,     65,     66,     67,     68,     69,     70,     71, },
  {    72,     73,     74,     75,     76,     77,     78,     79,     80, },
  {    81,     82,     83,     84,     85,     86,     87,     88,     89, },
  {    90,     91,     92,     93,     94,     95,     96,     97,     98, },
  {    99,    100,    101,    102,    103,    104,    105,    106,    107, },
  {   108,    109,    110,    111,    112,    113,    114,    115,    116, },
  {   117,    118,    119,    120,    121,    122,    123,    124,    125, },
  {   126,    127,    128,    129,    130,    131,    132,    133,    134, },
  {   135,    136,    137,    138,    139,    140,    141,    142,    143, },
  {   144,    145,    146,    147,    148,    149,    150,    151,    152, },
  {   153,    154,    155,    156,    157,    158,    159,    160,    161, },
  {   162,    163,    164,    165,    166,    167,    168,    169,    170, },
  {   171,    172,    173,    174,    175,    176,    177,    178,    179, },
  {   180,    181,    182,    183,    184,    185,    186,    187,    188, },
  {   189,    190,    191,    192,    193,    194,    195,    196,    197, },
  {   198,    199,    200,    201,    202,    203,    204,    205,    206, },
  {   207,    208,    209,    210,    211,    212,    213,    214,    215, },
  {   216,    217,    218,    219,    220,    221,    222,    223,    224, },
  {   225,    226,    227,    228,    229,    230,    231,    232,    233, },
  {   234,    235,    236,    237,    238,    239,    240,    241,    242, },
  {   243,    244,    245,    246,    247,    248,    249,    250,    251, },
  {   252,    253,    254},//, NO_LED,    256,    257,    258,    259,    260, },
  //{   261,    262,    263,    264,    265,    266,    267,    268,    269, },
  //{   270,    271,    272,    273,    274,    275,    276,    277,    278, },
  //{   279,    280,    281,    282,    283,    284,    285,    286,    287, },
  //{   288,    289,    290,    291,    292,    293,    294,    295,    296, },
  //{   297,    298,    299,    300,    301,    302,    303,    304,    305, },
}, {
  // LED Index to Physical Position
  {   0,   0 }, // LED 1
  {  28,   0 }, // LED 2
  {  56,   0 }, // LED 3
  {  84,   0 }, // LED 4
  { 112,   0 }, // LED 5
  { 140,   0 }, // LED 6
  { 168,   0 }, // LED 7
  { 196,   0 }, // LED 8
  { 224,   0 }, // LED 9
  {   0,   1 }, // LED 10
  {  28,   1 }, // LED 11
  {  56,   1 }, // LED 12
  {  84,   1 }, // LED 13
  { 112,   1 }, // LED 14
  { 140,   1 }, // LED 15
  { 168,   1 }, // LED 16
  { 196,   1 }, // LED 17
  { 224,   1 }, // LED 18
  {   0,   3 }, // LED 19
  {  28,   3 }, // LED 20
  {  56,   3 }, // LED 21
  {  84,   3 }, // LED 22
  { 112,   3 }, // LED 23
  { 140,   3 }, // LED 24
  { 168,   3 }, // LED 25
  { 196,   3 }, // LED 26
  { 224,   3 }, // LED 27
  {   0,   5 }, // LED 28
  {  28,   5 }, // LED 29
  {  56,   5 }, // LED 30
  {  84,   5 }, // LED 31
  { 112,   5 }, // LED 32
  { 140,   5 }, // LED 33
  { 168,   5 }, // LED 34
  { 196,   5 }, // LED 35
  { 224,   5 }, // LED 36
  {   0,   7 }, // LED 37
  {  28,   7 }, // LED 38
  {  56,   7 }, // LED 39
  {  84,   7 }, // LED 40
  { 112,   7 }, // LED 41
  { 140,   7 }, // LED 42
  { 168,   7 }, // LED 43
  { 196,   7 }, // LED 44
  { 224,   7 }, // LED 45
  {   0,   9 }, // LED 46
  {  28,   9 }, // LED 47
  {  56,   9 }, // LED 48
  {  84,   9 }, // LED 49
  { 112,   9 }, // LED 50
  { 140,   9 }, // LED 51
  { 168,   9 }, // LED 52
  { 196,   9 }, // LED 53
  { 224,   9 }, // LED 54
  {   0,  11 }, // LED 55
  {  28,  11 }, // LED 56
  {  56,  11 }, // LED 57
  {  84,  11 }, // LED 58
  { 112,  11 }, // LED 59
  { 140,  11 }, // LED 60
  { 168,  11 }, // LED 61
  { 196,  11 }, // LED 62
  { 224,  11 }, // LED 63
  {   0,  13 }, // LED 64
  {  28,  13 }, // LED 65
  {  56,  13 }, // LED 66
  {  84,  13 }, // LED 67
  { 112,  13 }, // LED 68
  { 140,  13 }, // LED 69
  { 168,  13 }, // LED 70
  { 196,  13 }, // LED 71
  { 224,  13 }, // LED 72
  {   0,  15 }, // LED 73
  {  28,  15 }, // LED 74
  {  56,  15 }, // LED 75
  {  84,  15 }, // LED 76
  { 112,  15 }, // LED 77
  { 140,  15 }, // LED 78
  { 168,  15 }, // LED 79
  { 196,  15 }, // LED 80
  { 224,  15 }, // LED 81
  {   0,  17 }, // LED 82
  {  28,  17 }, // LED 83
  {  56,  17 }, // LED 84
  {  84,  17 }, // LED 85
  { 112,  17 }, // LED 86
  { 140,  17 }, // LED 87
  { 168,  17 }, // LED 88
  { 196,  17 }, // LED 89
  { 224,  17 }, // LED 90
  {   0,  19 }, // LED 91
  {  28,  19 }, // LED 92
  {  56,  19 }, // LED 93
  {  84,  19 }, // LED 94
  { 112,  19 }, // LED 95
  { 140,  19 }, // LED 96
  { 168,  19 }, // LED 97
  { 196,  19 }, // LED 98
  { 224,  19 }, // LED 99
  {   0,  21 }, // LED 100
  {  28,  21 }, // LED 101
  {  56,  21 }, // LED 102
  {  84,  21 }, // LED 103
  { 112,  21 }, // LED 104
  { 140,  21 }, // LED 105
  { 168,  21 }, // LED 106
  { 196,  21 }, // LED 107
  { 224,  21 }, // LED 108
  {   0,  23 }, // LED 109
  {  28,  23 }, // LED 110
  {  56,  23 }, // LED 111
  {  84,  23 }, // LED 112
  { 112,  23 }, // LED 113
  { 140,  23 }, // LED 114
  { 168,  23 }, // LED 115
  { 196,  23 }, // LED 116
  { 224,  23 }, // LED 117
  {   0,  25 }, // LED 118
  {  28,  25 }, // LED 119
  {  56,  25 }, // LED 120
  {  84,  25 }, // LED 121
  { 112,  25 }, // LED 122
  { 140,  25 }, // LED 123
  { 168,  25 }, // LED 124
  { 196,  25 }, // LED 125
  { 224,  25 }, // LED 126
  {   0,  27 }, // LED 127
  {  28,  27 }, // LED 128
  {  56,  27 }, // LED 129
  {  84,  27 }, // LED 130
  { 112,  27 }, // LED 131
  { 140,  27 }, // LED 132
  { 168,  27 }, // LED 133
  { 196,  27 }, // LED 134
  { 224,  27 }, // LED 135
  {   0,  29 }, // LED 136
  {  28,  29 }, // LED 137
  {  56,  29 }, // LED 138
  {  84,  29 }, // LED 139
  { 112,  29 }, // LED 140
  { 140,  29 }, // LED 141
  { 168,  29 }, // LED 142
  { 196,  29 }, // LED 143
  { 224,  29 }, // LED 144
  {   0,  31 }, // LED 145
  {  28,  31 }, // LED 146
  {  56,  31 }, // LED 147
  {  84,  31 }, // LED 148
  { 112,  31 }, // LED 149
  { 140,  31 }, // LED 150
  { 168,  31 }, // LED 151
  { 196,  31 }, // LED 152
  { 224,  31 }, // LED 153
  {   0,  32 }, // LED 154
  {  28,  32 }, // LED 155
  {  56,  32 }, // LED 156
  {  84,  32 }, // LED 157
  { 112,  32 }, // LED 158
  { 140,  32 }, // LED 159
  { 168,  32 }, // LED 160
  { 196,  32 }, // LED 161
  { 224,  32 }, // LED 162
  {   0,  34 }, // LED 163
  {  28,  34 }, // LED 164
  {  56,  34 }, // LED 165
  {  84,  34 }, // LED 166
  { 112,  34 }, // LED 167
  { 140,  34 }, // LED 168
  { 168,  34 }, // LED 169
  { 196,  34 }, // LED 170
  { 224,  34 }, // LED 171
  {   0,  36 }, // LED 172
  {  28,  36 }, // LED 173
  {  56,  36 }, // LED 174
  {  84,  36 }, // LED 175
  { 112,  36 }, // LED 176
  { 140,  36 }, // LED 177
  { 168,  36 }, // LED 178
  { 196,  36 }, // LED 179
  { 224,  36 }, // LED 180
  {   0,  38 }, // LED 181
  {  28,  38 }, // LED 182
  {  56,  38 }, // LED 183
  {  84,  38 }, // LED 184
  { 112,  38 }, // LED 185
  { 140,  38 }, // LED 186
  { 168,  38 }, // LED 187
  { 196,  38 }, // LED 188
  { 224,  38 }, // LED 189
  {   0,  40 }, // LED 190
  {  28,  40 }, // LED 191
  {  56,  40 }, // LED 192
  {  84,  40 }, // LED 193
  { 112,  40 }, // LED 194
  { 140,  40 }, // LED 195
  { 168,  40 }, // LED 196
  { 196,  40 }, // LED 197
  { 224,  40 }, // LED 198
  {   0,  42 }, // LED 199
  {  28,  42 }, // LED 200
  {  56,  42 }, // LED 201
  {  84,  42 }, // LED 202
  { 112,  42 }, // LED 203
  { 140,  42 }, // LED 204
  { 168,  42 }, // LED 205
  { 196,  42 }, // LED 206
  { 224,  42 }, // LED 207
  {   0,  44 }, // LED 208
  {  28,  44 }, // LED 209
  {  56,  44 }, // LED 210
  {  84,  44 }, // LED 211
  { 112,  44 }, // LED 212
  { 140,  44 }, // LED 213
  { 168,  44 }, // LED 214
  { 196,  44 }, // LED 215
  { 224,  44 }, // LED 216
  {   0,  46 }, // LED 217
  {  28,  46 }, // LED 218
  {  56,  46 }, // LED 219
  {  84,  46 }, // LED 220
  { 112,  46 }, // LED 221
  { 140,  46 }, // LED 222
  { 168,  46 }, // LED 223
  { 196,  46 }, // LED 224
  { 224,  46 }, // LED 225
  {   0,  48 }, // LED 226
  {  28,  48 }, // LED 227
  {  56,  48 }, // LED 228
  {  84,  48 }, // LED 229
  { 112,  48 }, // LED 230
  { 140,  48 }, // LED 231
  { 168,  48 }, // LED 232
  { 196,  48 }, // LED 233
  { 224,  48 }, // LED 234
  {   0,  50 }, // LED 235
  {  28,  50 }, // LED 236
  {  56,  50 }, // LED 237
  {  84,  50 }, // LED 238
  { 112,  50 }, // LED 239
  { 140,  50 }, // LED 240
  { 168,  50 }, // LED 241
  { 196,  50 }, // LED 242
  { 224,  50 }, // LED 243
  {   0,  52 }, // LED 244
  {  28,  52 }, // LED 245
  {  56,  52 }, // LED 246
  {  84,  52 }, // LED 247
  { 112,  52 }, // LED 248
  { 140,  52 }, // LED 249
  { 168,  52 }, // LED 250
  { 196,  52 }, // LED 251
  { 224,  52 }, // LED 252
  {   0,  54 }, // LED 253
  {  28,  54 }, // LED 254
  //{  56,  54 }, // LED 255
  //{  84,  54 }, // LED 256
  //{ 112,  54 }, // LED 257
  //{ 140,  54 }, // LED 258
  //{ 168,  54 }, // LED 259
  //{ 196,  54 }, // LED 260
  //{ 224,  54 }, // LED 261
  //{   0,  56 }, // LED 262
  //{  28,  56 }, // LED 263
  //{  56,  56 }, // LED 264
  //{  84,  56 }, // LED 265
  //{ 112,  56 }, // LED 266
  //{ 140,  56 }, // LED 267
  //{ 168,  56 }, // LED 268
  //{ 196,  56 }, // LED 269
  //{ 224,  56 }, // LED 270
  //{   0,  58 }, // LED 271
  //{  28,  58 }, // LED 272
  //{  56,  58 }, // LED 273
  //{  84,  58 }, // LED 274
  //{ 112,  58 }, // LED 275
  //{ 140,  58 }, // LED 276
  //{ 168,  58 }, // LED 277
  //{ 196,  58 }, // LED 278
  //{ 224,  58 }, // LED 279
  //{   0,  60 }, // LED 280
  //{  28,  60 }, // LED 281
  //{  56,  60 }, // LED 282
  //{  84,  60 }, // LED 283
  //{ 112,  60 }, // LED 284
  //{ 140,  60 }, // LED 285
  //{ 168,  60 }, // LED 286
  //{ 196,  60 }, // LED 287
  //{ 224,  60 }, // LED 288
  //{   0,  62 }, // LED 289
  //{  28,  62 }, // LED 290
  //{  56,  62 }, // LED 291
  //{  84,  62 }, // LED 292
  //{ 112,  62 }, // LED 293
  //{ 140,  62 }, // LED 294
  //{ 168,  62 }, // LED 295
  //{ 196,  62 }, // LED 296
  //{ 224,  62 }, // LED 297
  //{   0,  64 }, // LED 298
  //{  28,  64 }, // LED 299
  //{  56,  64 }, // LED 300
  //{  84,  64 }, // LED 301
  //{ 112,  64 }, // LED 302
  //{ 140,  64 }, // LED 303
  //{ 168,  64 }, // LED 304
  //{ 196,  64 }, // LED 305
  //{ 224,  64 }, // LED 306
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4//, 4, 4,
  //4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  //4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  //4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  //4, 4
} };
