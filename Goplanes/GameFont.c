#include "GameFont.h"

#include <font.h>

const u32 gameFont[FONT_LEN * 8] =
{
    // space
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,

    // !
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x00000000,
    0x000BB000,
    0x00000000,

    // "
    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,

    // #
    0x00000000,
    0x0BB00BB0,
    0xBBBBBBBB,
    0x0BB00BB0,
    0x0BB00BB0,
    0xBBBBBBBB,
    0x0BB00BB0,
    0x00000000,

    // $
    0x000BB000,
    0x00BBBBB0,
    0x0BB00000,
    0x00BBBB00,
    0x00000BB0,
    0x0BBBBB00,
    0x000BB000,
    0x00000000,

    // %
    0x00000000,
    0x0BB00BB0,
    0x0BB0BB00,
    0x000BB000,
    0x00BB0000,
    0x0BB00BB0,
    0x0B000BB0,
    0x00000000,

    // &
    0x000BBB00,
    0x00BB0BB0,
    0x000BBB00,
    0x00BBB000,
    0x0BB0BBBB,
    0x0BB00BB0,
    0x00BBB0BB,
    0x00000000,

    // '
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,

    // (
    0x00000000,
    0x0000BBB0,
    0x000BBB00,
    0x000BB000,
    0x000BB000,
    0x000BBB00,
    0x0000BBB0,
    0x00000000,

    // )
    0x00000000,
    0x0BBB0000,
    0x00BBB000,
    0x000BB000,
    0x000BB000,
    0x00BBB000,
    0x0BBB0000,
    0x00000000,

    // *
    0x00000000,
    0x0BB00BB0,
    0x00BBBB00,
    0xBBBBBBBB,
    0x00BBBB00,
    0x0BB00BB0,
    0x00000000,
    0x00000000,

    // +
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x0BBBBBB0,
    0x000BB000,
    0x000BB000,
    0x00000000,
    0x00000000,

    // ,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x00BB0000,

    // -
    0x00000000,
    0x00000000,
    0x00000000,
    0x0BBBBBB0,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,

    // .
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x00000000,

    // /
    0x00000000,
    0x00000BB0,
    0x0000BB00,
    0x000BB000,
    0x00BB0000,
    0x0BB00000,
    0x0B000000,
    0x00000000,

    // numbers start here, index 16
    // 0
    0x00111100,
    0x01BBBB10,
    0x1BB11BB1,
    0x1BB1BBB1,
    0x1BBB1BB1,
    0x1BB11BB1,
    0x01BBBB10,
    0x00111100,

    // 1
    0x00011000,
    0x001BB100,
    0x01BBB100,
    0x001BB100,
    0x001BB100,
    0x001BB100,
    0x1BBBBBB1,
    0x01111110,

    // 2
    0x00111100,
    0x01BBBB10,
    0x1BB11BB1,
    0x0111BB10,
    0x001BB100,
    0x01BB1000,
    0x1BBBBBB1,
    0x01111110,

    // 3
    0x01111110,
    0x1BBBBBB1,
    0x0111BB10,
    0x001BB100,
    0x0001BB10,
    0x1BB11BB1,
    0x01BBBB10,
    0x00111100,

    // 4
    0x00001100,
    0x0001BB10,
    0x001BBB10,
    0x01BBBB10,
    0x1BB1BB10,
    0x1BBBBBB1,
    0x0111BB10,
    0x00001100,

    // 5
    0x01111110,
    0x1BBBBBB1,
    0x1BB11110,
    0x1BBBBB10,
    0x01111BB1,
    0x1BB11BB1,
    0x01BBBB10,
    0x00111100,

    // 6
    0x00111100,
    0x01BBBB10,
    0x1BB11100,
    0x1BBBBB10,
    0x1BB11BB1,
    0x1BB11BB1,
    0x01BBBB10,
    0x00111100,

    // 7
    0x01111110,
    0x1BBBBBB1,
    0x01111BB1,
    0x0001BB10,
    0x001BB100,
    0x01BB1000,
    0x01BB1000,
    0x00110000,

    // 8
    0x00111100,
    0x01BBBB10,
    0x1BB11BB1,
    0x01BBBB10,
    0x1BB11BB1,
    0x1BB11BB1,
    0x01BBBB10,
    0x00111100,

    // 9
    0x00111100,
    0x01BBBB10,
    0x1BB11BB1,
    0x01BBBBB1,
    0x00111BB1,
    0x0011BB10,
    0x01BBB100,
    0x00111000,

    // :
    0x00000000,
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x00000000,

    // ;
    0x00000000,
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x00000000,
    0x000BB000,
    0x000BB000,
    0x00BB0000,

    // <
    0x00000BB0,
    0x0000BB00,
    0x000BB000,
    0x00BB0000,
    0x000BB000,
    0x0000BB00,
    0x00000BB0,
    0x00000000,

    // =
    0x00000000,
    0x00000000,
    0x0BBBBBB0,
    0x00000000,
    0x00000000,
    0x0BBBBBB0,
    0x00000000,
    0x00000000,

    // <
    0x0BB00000,
    0x00BB0000,
    0x000BB000,
    0x0000BB00,
    0x000BB000,
    0x00BB0000,
    0x0BB00000,
    0x00000000,

    // ?
    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0000BB00,
    0x000BB000,
    0x00000000,
    0x000BB000,
    0x00000000,

    // @
    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB0BBB0,
    0x0BB0BBB0,
    0x0BB00000,
    0x00BBBBB0,
    0x00000000,

    // uppercase letters start here, index 33
    0x00000000,
    0x000BB000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBBB0,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBB00,
    0x00000000,


    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB00000,
    0x0BB00000,
    0x0BB00BB0,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x0BBBB000,
    0x0BB0BB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB0BB00,
    0x0BBBB000,
    0x00000000,


    0x00000000,
    0x0BBBBBB0,
    0x0BB00000,
    0x0BBBBB00,
    0x0BB00000,
    0x0BB00000,
    0x0BBBBBB0,
    0x00000000,


    0x00000000,
    0x0BBBBBB0,
    0x0BB00000,
    0x0BBBBB00,
    0x0BB00000,
    0x0BB00000,
    0x0BB00000,
    0x00000000,


    0x00000000,
    0x00BBBBB0,
    0x0BB00000,
    0x0BB00000,
    0x0BB0BBB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBBB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x0BBBBBB0,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x0BBBBBB0,
    0x00000000,


    0x00000000,
    0x00000BB0,
    0x00000BB0,
    0x00000BB0,
    0x00000BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BB0BB00,
    0x0BBBB000,
    0x0BBBB000,
    0x0BB0BB00,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x0BB00000,
    0x0BB00000,
    0x0BB00000,
    0x0BB00000,
    0x0BB00000,
    0x0BBBBBB0,
    0x00000000,


    0x00000000,
    0x0BB000BB,
    0x0BBB0BBB,
    0x0BBBBBBB,
    0x0BB0B0BB,
    0x0BB000BB,
    0x0BB000BB,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BBB0BB0,
    0x0BBBBBB0,
    0x0BBBBBB0,
    0x0BB0BBB0,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBB00,
    0x0BB00000,
    0x0BB00000,
    0x00000000,


    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB0BB00,
    0x00BB0BB0,
    0x00000000,


    0x00000000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBB00,
    0x0BB0BB00,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x00BBBB00,
    0x0BB00000,
    0x00BBBB00,
    0x00000BB0,
    0x00000BB0,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x0BBBBBB0,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBBB0,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x000BB000,
    0x00000000,


    0x00000000,
    0x0BB000BB,
    0x0BB000BB,
    0x0BB0B0BB,
    0x0BBBBBBB,
    0x0BBB0BBB,
    0x0BB000BB,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x00000000,


    0x00000000,
    0x0BBBBBB0,
    0x0000BB00,
    0x000BB000,
    0x00BB0000,
    0x0BB00000,
    0x0BBBBBB0,
    0x00000000,

    // [
    0x00000000,
    0x000BBBB0,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BBBB0,
    0x00000000,

    // backslash
    0x00000000,
    0x0B000000,
    0x0BB00000,
    0x00BB0000,
    0x000BB000,
    0x0000BB00,
    0x00000BB0,
    0x00000000,

    // ]
    0x00000000,
    0x0BBBB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x0BBBB000,
    0x00000000,

    // ^
    0x00000000,
    0x0000B000,
    0x000BBB00,
    0x00BB0BB0,
    0x0BB000BB,
    0x00000000,
    0x00000000,
    0x00000000,

    // _
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0xBBBBBBBB,
    0x00000000,

    // some kind of diamond.
    0x00000000,
    0x000BB000,
    0x00BBBB00,
    0x0BBBBBB0,
    0x0BBBBBB0,
    0x00BBBB00,
    0x000BB000,
    0x00000000,

    // lowercase letters start here
    0x00000000,
    0x00000000,
    0x00BBBB00,
    0x00000BB0,
    0x00BBBBB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x00000000,


    0x00000000,
    0x0BB00000,
    0x0BB00000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBB00,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00BBBB00,
    0x0BB00000,
    0x0BB00000,
    0x0BB00000,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x00000BB0,
    0x00000BB0,
    0x00BBBBB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BBBBBB0,
    0x0BB00000,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x0000BBB0,
    0x000BB000,
    0x00BBBBB0,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00BBBBB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x00000BB0,
    0x0BBBBB00,


    0x00000000,
    0x0BB00000,
    0x0BB00000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x000BB000,
    0x00000000,
    0x00BBB000,
    0x000BB000,
    0x000BB000,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x00000BB0,
    0x00000000,
    0x00000BB0,
    0x00000BB0,
    0x00000BB0,
    0x00000BB0,
    0x00BBBB00,


    0x00000000,
    0x0BB00000,
    0x0BB00000,
    0x0BB0BB00,
    0x0BBBB000,
    0x0BB0BB00,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x00BBB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BB00BB0,
    0x0BBBBBBB,
    0x0BBBBBBB,
    0x0BB0B0BB,
    0x0BB000BB,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00BBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BBBBB00,
    0x0BB00000,
    0x0BB00000,


    0x00000000,
    0x00000000,
    0x00BBBBB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x00000BB0,
    0x00000BB0,


    0x00000000,
    0x00000000,
    0x0BBBBB00,
    0x0BB00BB0,
    0x0BB00000,
    0x0BB00000,
    0x0BB00000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x00BBBBB0,
    0x0BB00000,
    0x00BBBB00,
    0x00000BB0,
    0x0BBBBB00,
    0x00000000,


    0x00000000,
    0x000BB000,
    0x0BBBBBB0,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x0000BBB0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBB00,
    0x000BB000,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BB000BB,
    0x0BB0B0BB,
    0x0BBBBBBB,
    0x00BBBBB0,
    0x00BB0BB0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BB00BB0,
    0x00BBBB00,
    0x000BB000,
    0x00BBBB00,
    0x0BB00BB0,
    0x00000000,


    0x00000000,
    0x00000000,
    0x0BB00BB0,
    0x0BB00BB0,
    0x0BB00BB0,
    0x00BBBBB0,
    0x0000BB00,
    0x0BBBB000,


    0x00000000,
    0x00000000,
    0x0BBBBBB0,
    0x0000BB00,
    0x000BB000,
    0x00BB0000,
    0x0BBBBBB0,
    0x00000000,

    // spade
    0x00000000,
    0x000BB000,
    0x00BBBB00,
    0x0BBBBBB0,
    0x0BBBBBB0,
    0x000BB000,
    0x00BBBB00,
    0x00000000,

    // |
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,
    0x000BB000,

    // return key
    0x00000000,
    0x0BBBBBB0,
    0x0BBBB000,
    0x0BBBBB00,
    0x0BB0BBB0,
    0x0BB00BB0,
    0x00000BB0,
    0x00000000,

    // arrow left
    0x0000B000,
    0x000BB000,
    0x00BBB000,
    0x0BBBB000,
    0x00BBB000,
    0x000BB000,
    0x0000B000,
    0x00000000,

    // arrow right
    0x000B0000,
    0x000BB000,
    0x000BBB00,
    0x000BBBB0,
    0x000BBB00,
    0x000BB000,
    0x000B0000,
    0x00000000
};

