//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose:
//
// $NoKeywords: $
//=============================================================================


#include "stdafx.h"
#include "pearsonshash.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

// This is a table of the values 0-255 in pseudo random order for use in our pearsons hash
// variant implemented below
const unsigned char g_CTHashRandomValues[256] =
{
	131, 184, 146,  42, 124, 142, 226,  76,   8, 135, 215, 116, 228,  49, 144, 231,
	238,  25, 156, 125, 128,  87, 223,  38,  98, 122, 105,   4,  35, 180, 188, 160,
	179,  59, 218,   0, 192, 207, 209, 150, 227, 143, 140, 161,  73,  84, 111, 162,
	239,  74, 210, 195,  15, 225, 104, 221, 245,  12,  72,  47, 109, 187,  40, 178,
	208,  56, 190, 193, 126,  95,  33,  45, 177, 170, 186, 123, 202, 149,  60, 194,
	168, 102,  71, 148,  46, 121,  52, 119, 196, 247, 127, 145,  75,  79,  61, 254,
	9,    44,  23, 211,  18, 175, 251, 130, 203, 108,  85, 167,  29, 250, 138, 182,
	101, 213, 159,  92,  36,  10,  86,  32, 176,  80,  17, 134, 181, 114,  64, 165,
	89,   68,   6,  14, 205, 137, 117,   7,  39, 132,  26,  19, 214,  99, 166, 163,
	69,  174, 157, 100, 201, 118,   2,  28, 235, 236, 139, 244,  70,  20, 155,  82,
	51,  154, 115,  94,  93,  83, 136,  27, 198,  43,  50, 243, 183, 153,  53, 206,
	77,   55,  57,   3, 220, 147, 253, 110,  37, 246,  97,  13, 120, 103,  91, 169,
	58,   11, 133,  22, 152, 189, 222, 151, 141,  88, 224,   1,  48, 191, 249, 173,
	106, 113, 252, 172, 232,  66, 219,  96, 237,  21, 233,  62, 242,  54, 230,  65,
	78,  248,  16,  41,  31, 200,  90, 112, 255, 171, 164,  24, 199,  81, 212, 197,
	185,  67,   5, 234,  30, 129, 216,  63, 204, 158, 217, 229, 107, 240, 241,  34,
};
