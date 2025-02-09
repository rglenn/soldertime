/** \file
 * Solder:Time Desk Clock bitmap font.
 *
 * Font is encoded as 5 vertical stripes, 7 bits per stripe.
 * Array is in ASCII order, with an offset of 0x20 (' ').
 * Look at them sideways.
 */
#include <stdint.h>
#include "bitpattern.h"
#include "font.h"

const __flash uint8_t LETTERS[][5] = {
	// Space
	{
		________,
		________,
		________,
		________,
		________,
	},
	// !
	{
		________,
		________,
		_X_XXXXX,
		________,
		________,
	},
	// "
	{
		________,
		______XX,
		________,
		______XX,
		________,
	},
	// #
	{
		___X__X_,
		__XXXXXX,
		___X__X_,
		__XXXXXX,
		___X__X_,
	},
	// $
	{
		_____X__,
		__X_X_X_,
		_XXXXXXX,
		__X_X_X_,
		___X____,
	},
	// %
	{
		__X___X_,
		___X_X_X,
		__X_X_X_,
		_X_X_X__,
		__X___X_,
	},
	// &
	{
		__XX_XX_,
		_X__X__X,
		_X_X___X,
		__X___X_,
		_X_X____,
	},
	// '
	{
		________,
		________,
		______XX,
		________,
		________,
	},
	// (
	{
		________,
		___XXX__,
		__X___X_,
		_X_____X,
		________,
	},
	// (
	{
		________,
		_X_____X,
		__X___X_,
		___XXX__,
		________,
	},
	// *
	{
		_____X__,
		___X_X__,
		____XXXX,
		___X_X__,
		_____X__,
	},
	// +
	{
		____X___,
		____X___,
		__XXXXX_,
		____X___,
		____X___,
	},
	// ' (not sure)
	{
		________,
		________,
		______X_,
		_______X,
		________,
	},
	// -
	{
		____X___,
		____X___,
		____X___,
		____X___,
		____X___,
	},
	// .
	{
		________,
		________,
		_X______,
		________,
		________,
	},
	// /
	{
		__X_____,
		___X____,
		____X___,
		_____X__,
		______X_,
	},

	// 0
	{
		__XXXXX_,
		_X_____X,
		_X_____X,
		_X_____X,
		__XXXXX_,
	},
	// 1
	{
		________,
		_X____X_,
		_XXXXXXX,
		_X______,
		________,
	},
	// 2
	{
		_XX___X_,
		_X_X___X,
		_X__X__X,
		_X__X__X,
		_X___XX_,
	},
	// 3
	{
		__X___X_,
		_X_____X,
		_X__X__X,
		_X__X__X,
		__XX_XX_,
	},
	// 4
	{
		_____XXX,
		____X___,
		____X___,
		_XXXXXXX,
		____X___,
	},
	// 5
	{
		__X_XXXX,
		_X__X__X,
		_X__X__X,
		_X__X__X,
		__XX___X,
	},
	// 6
	{
		__XXXXX_,
		_X__X__X,
		_X__X__X,
		_X__X__X,
		__XX__X_,
	},
	// 7
	{
		_X_____X,
		__X____X,
		___X___X,
		____X__X,
		_____XXX,
	},
	// 8
	{
		__XX_XX_,
		_X__X__X,
		_X__X__X,
		_X__X__X,
		__XX_XX_,
	},
	// 9
	{
		_____XX_,
		____X__X,
		____X__X,
		____X__X,
		_XXXXXX_,
	},

	// :
	{
		________,
		________,
		__XX_XX_,
		________,
		________,
	},
	// ;
	{
		________,
		_X______,
		__XX_XX_,
		________,
		________,
	},
	// <
	{
		____X___,
		___X_X__,
		__X___X_,
		_X_____X,
		________,
	},
	// =
	{
		___X_X__,
		___X_X__,
		___X_X__,
		___X_X__,
		___X_X__,
	},
	// >
	{
		________,
		_X_____X,
		__X___X_,
		___X_X__,
		____X___,
	},
	// ?
	{
		_____XX_,
		_______X,
		_X_X___X,
		____X__X,
		_____XX_,
	},
	// @
	{
		__XXXXX_,
		_X_____X,
		_X__X__X,
		_X_X_X_X,
		____X_X_,
	},

	// A
	{
		_XXXXX__,
		____X_X_,
		____X__X,
		____X_X_,
		_XXXXX__,
	},
	// B
	{
		_XXXXXXX,
		_X__X__X,
		_X__X__X,
		_X__X__X,
		__XX_XX_,
	},
	// C
	{
		__XXXXX_,
		_X_____X,
		_X_____X,
		_X_____X,
		__X___X_,
	},
	// D
	{
		_XXXXXXX,
		_X_____X,
		_X_____X,
		_X_____X,
		__XXXXX_,
	},
	// E
	{
		_XXXXXXX,
		_X__X__X,
		_X__X__X,
		_X__X__X,
		_X_____X,
	},
	// F
	{
		_XXXXXXX,
		____X__X,
		____X__X,
		____X__X,
		_______X,
	},
	// G
	{
		__XXXXX_,
		_X_____X,
		_X__X__X,
		_X__X__X,
		__XX__X_,
	},
	// H
	{
		_XXXXXXX,
		____X___,
		____X___,
		____X___,
		_XXXXXXX,
	},
	// I  was   65,65,127,65,65, 
	{
		________,
		_X_____X,
		_XXXXXXX,
		_X_____X,
		________,
	},
	// J
	{
		__X_____,
		_X______,
		_X_____X,
		__XXXXXX,
		_______X,
	},
	// K
	{
		_XXXXXXX,
		____X___,
		___X_X__,
		__X___X_,
		_X_____X,
	},
	// L
	{
		_XXXXXXX,
		_X______,
		_X______,
		_X______,
		_X______,
	},
	// M
	{
		_XXXXXXX,
		______X_,
		_____X__,
		______X_,
		_XXXXXXX,
	},
	// N
	{
		_XXXXXXX,
		_____X__,
		____X___,
		___X____,
		_XXXXXXX,
	},
	// O
	{
		__XXXXX_,
		_X_____X,
		_X_____X,
		_X_____X,
		__XXXXX_,
	},
	// P
	{
		_XXXXXXX,
		____X__X,
		____X__X,
		____X__X,
		_____XX_,
	},
	// Q
	{
		__XXXXX_,
		_X_____X,
		_X_X___X,
		__X____X,
		_X_XXXX_,
	},
	// R
	{
		_XXXXXXX,
		____X__X,
		___XX__X,
		__X_X__X,
		_X___XX_,
	},
	// S
	{
		__X__XX_,
		_X__X__X,
		_X__X__X,
		_X__X__X,
		__XX__X_,
	},
	// T
	{
		_______X,
		_______X,
		_XXXXXXX,
		_______X,
		_______X,
	},
	// U
	{
		__XXXXXX,
		_X______,
		_X______,
		_X______,
		__XXXXXX,
	},
	// V
	{
		___XXXXX,
		__X_____,
		_X______,
		__X_____,
		___XXXXX,
	},
	// W
	{
		__XXXXXX,
		_X______,
		__XX____,
		_X______,
		__XXXXXX,
	},
	// X
	{
		_XX___XX,
		___X_X__,
		____X___,
		___X_X__,
		_XX___XX,
	},
	// Y
	{
		______XX,
		_____X__,
		_XXXX___,
		_____X__,
		______XX,
	},
	// Z
	{
		_XX____X,
		_X_X___X,
		_X__X__X,
		_X___X_X,
		_X____XX,
	},

	// [
	{
		________,
		_XXXXXXX,
		_X_____X,
		_X_____X,
		________,
	},
	// back slash
	{
		______X_,
		_____X__,
		____X___,
		___X____,
		__X_____,
	},
	// ]
	{
		________,
		_X_____X,
		_X_____X,
		_XXXXXXX,
		________,
	},
	// ^
	{
		________,
		______X_,
		_______X,
		______X_,
		________,
	},
	// _
	{
		____X___,
		____X___,
		____X___,
		____X___,
		____X___,
	},
	// `
	{
		________,
		________,
		_______X,
		______X_,
		________,
	},

	// a
	{
		_XXX____,
		_X__X___,
		_X__X___,
		__X_X___,
		_XXXX___,
	},
	// b
	{
		_XXXXXX_,
		__XX____,
		_X__X___,
		_X__X___,
		__XX____,
	},
	// c
	{
		__XX____,
		_X__X___,
		_X__X___,
		_X__X___,
		_X__X___,
	},
	// d
	{
		__XX____,
		_X__X___,
		_X__X___,
		__XX____,
		_XXXXXX_,
	},
	// e
	{
		__XXX___,
		_X_X_X__,
		_X_X_X__,
		_X_X_X__,
		_X_XX___,
	},
	// f
	{
		________,
		____X___,
		_XXXXX__,
		____X_X_,
		________,
	},
	// g
	{
		__X__X__,
		_X__X_X_,
		_X__X_X_,
		_X__X_X_,
		__XXXX__,
	},
	// h
	{
		_XXXXXX_,
		____X___,
		____X___,
		____X___,
		_XXX____,
	},
	// i
	{
		________,
		________,
		_XXXX_X_,
		________,
		________,
	},
	// j
	{
		__X_____,
		_X______,
		_X____X_,
		__XXXXX_,
		______X_,
	},
	// k
	{
		_XXXXX__,
		___X____,
		___X____,
		__X_X___,
		_X___X__,
	},
	// l
	{
		________,
		_XXXXX__,
		_X______,
		_X______,
		________,
	},
	// m
	{
		_XXXX___,
		_____X__,
		_XXXX___,
		_____X__,
		_XXXX___,
	},
	// n
	{
		_XXXXX__,
		____X___,
		_____X__,
		_____X__,
		_XXXX___,
	},
	// o
	{
		__XX____,
		_X__X___,
		_X__X___,
		_X__X___,
		__XX____,
	},
	// p
	{
		_XXXXXX_,
		___X__X_,
		___X__X_,
		___X__X_,
		____XX__,
	},
	// q
	{
		____XX__,
		___X__X_,
		___X__X_,
		___X__X_,
		_XXXXX__,
	},
	// r
	{
		_XXXXX__,
		____X___,
		_____X__,
		_____X__,
		____X___,
	},
	// s
	{
		_X__X___,
		_X_X_X__,
		_X_X_X__,
		_X_X_X__,
		__X__X__,
	},
	// t
	{
		_____X__,
		_____X__,
		_XXXXXX_,
		_____X__,
		_____X__,
	},
	// u
	{
		__XXXX__,
		_X______,
		_X______,
		_X______,
		__XXXX__,
	},
	// v
	{
		___XXX__,
		__X_____,
		_X______,
		__X_____,
		___XXX__,
	},
	// w
	{
		_XXXXX__,
		__X_____,
		___X____,
		__X_____,
		_XXXXX__,
	},
	// x
	{
		_X___X__,
		__X_X___,
		___X____,
		__X_X___,
		_X___X__,
	},
	// y
	{
		_____X__,
		____X___,
		_XXX____,
		____X___,
		_____X__,
	},
	// z
	{
		_X___X__,
		_XX__X__,
		_X_X_X__,
		_X__XX__,
		_X___X__,
	},

	// {
	{
		________,
		____X___,
		__XX_XX_,
		_X_____X,
		________,
	},
	// |
	{
		________,
		________,
		_XXXXXXX,
		________,
		________,
	},
	// }
	{
		________,
		_X_____X,
		__XX_XX_,
		____X___,
		________,
	},
	// ~
	{
		___X____,
		____X___,
		___XX___,
		___X____,
		____X___,
	},

  // Small Numbers (for adding colon in clock applications)
	// 0
	{
		________,
		__XXXXX_,
		__X___X_,
		__XXXXX_,
		________,
	},
	// 1
	{
		________,
		________,
		__XXXXX_,
		________,
		________,
	},
	// 2
	{
		________,
		__XXX_X_,
		__X_X_X_,
		__X_XXX_,
		________,
	},
	// 3
	{
		________,
		__X_X_X_,
		__X_X_X_,
		__XXXXX_,
		________,
	},
	// 4
	{
		________,
		____XXX_,
		____X___,
		__XXXXX_,
		________,
	},
	// 5
	{
		________,
		__X_XXX_,
		__X_X_X_,
		__XXX_X_,
		________,
	},
	// 6
	{
		________,
		__XXXXX_,
		__X_X_X_,
		__XXX_X_,
		________,
	},
	// 7
	{
		________,
		______X_,
		______X_,
		__XXXXX_,
		________,
	},
	// 8
	{
		________,
		__XXXXX_,
		__X_X_X_,
		__XXXXX_,
		________,
	},
	// 9
	{
		________,
		____XXX_,
		____X_X_,
		__XXXXX_,
		________,
	},
	// :
	{
		________,
		________,
		___X_X__,
		________,
		________,
	},
};

const __flash uint8_t GRAPHIC[ ][5] = {
	// Blank?
	{
		________,
		________,
		________,
		________,
		________,
	},
	// Speaker cone
	{
		________,
		___XXX__,
		__XXXXX_,
		_XXXXXXX,
		________,
	},
	// Sound wave
	{
		__X___X_,
		___XXX__,
		_X_____X,
		__X___X_,
		___XXX__,
	},
	// Check mark
	{
		___X____,
		__X_____,
		___X____,
		____X___,
		_____X__,
	},
	// "X"
	{
		__X___X_,
		___X_X__,
		____X___,
		___X_X__,
		__X___X_,
	},
};

/*
 * Generated with:
    convert new-logo.solid.png \
	-crop 200x70+0+60 \
	-resize 20x \
	-crop 20x7 \
	+repage \
	-depth 8 \
	-negate \
	gray:new-logo.small.raw
*/
const __flash uint8_t logo[7][20] = {
0x00, 0x00, 0x00, 0x69, 0xfe, 0xbf, 0x3b, 0x0f, 0x8c, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x64, 0x00, 0x00, 0x00,
0x00, 0x00, 0x4c, 0xfe, 0xdb, 0x00, 0x3b, 0x4c, 0x00, 0x8c, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xe6, 0x4c, 0x00, 0x00,
0x00, 0x4c, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x0f, 0x29, 0xfe, 0x69, 0x00, 0x00, 0x00, 0x00, 0x64, 0xfe, 0x4c, 0x00,
0x69, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0x4c, 0x00, 0xb0, 0x78, 0x00, 0xbf, 0x9f, 0x00, 0x9f, 0xfe, 0xfe, 0xfe, 0x64,
0x69, 0xfe, 0xfe, 0xfe, 0xfe, 0xb0, 0x00, 0x00, 0xbf, 0xfe, 0x00, 0x64, 0xfe, 0xfe, 0x00, 0x9f, 0xfe, 0xfe, 0xfe, 0x69,
0x00, 0x4c, 0xfe, 0xfe, 0xe6, 0x00, 0x78, 0xfe, 0xfe, 0xfe, 0x00, 0x8c, 0xfe, 0xbf, 0x00, 0xd2, 0xfe, 0xfe, 0x4c, 0x00,
0x00, 0x00, 0x69, 0xfe, 0xb0, 0x00, 0x29, 0x4c, 0x3b, 0x9f, 0x3b, 0x00, 0x78, 0x00, 0x3b, 0xfe, 0xfe, 0x69, 0x00, 0x00,
};

uint8_t get_logo(uint8_t x, uint8_t y)
{
  return logo[x][y];
}

uint8_t get_graphic(uint8_t a, uint8_t b)
{
  return GRAPHIC[a][b];
}

uint8_t get_letters(uint8_t a, uint8_t b)
{
  return LETTERS[a][b];
}

