#include <stdint.h>

typedef unsigned char BYTE;

typedef union {
    struct
    {
        unsigned _31 : 1;
        unsigned _30 : 1;
        unsigned _29 : 1;
        unsigned _28 : 1;
        unsigned _27 : 1;
        unsigned _26 : 1;
        unsigned _25 : 1;
        unsigned _24 : 1;
        unsigned _23 : 1;
        unsigned _22 : 1;
        unsigned _21 : 1;
        unsigned _20 : 1;
        unsigned _19 : 1;
        unsigned _18 : 1;
        unsigned _17 : 1;
        unsigned _16 : 1;
        unsigned _15 : 1;
        unsigned _14 : 1;
        unsigned _13 : 1;
        unsigned _12 : 1;
        unsigned _11 : 1;
        unsigned _10 : 1;
        unsigned _9 : 1;
        unsigned _8 : 1;
        unsigned _7 : 1;
        unsigned _6 : 1;
        unsigned _5 : 1;
        unsigned _4 : 1;
        unsigned _3 : 1;
        unsigned _2 : 1;
        unsigned _1 : 1;
        unsigned _0 : 1;
    } bit;

    struct
    {
        unsigned _7 : 4;
        unsigned _6 : 4;
        unsigned _5 : 4;
        unsigned _4 : 4;
        unsigned _3 : 4;
        unsigned _2 : 4;
        unsigned _1 : 4;
        unsigned _0 : 4;
    } nibble;

    struct
    {
        unsigned _3 : 8;
        unsigned _2 : 8;
        unsigned _1 : 8;
        unsigned _0 : 8;
    } byte;

    struct
    {
        unsigned _1 : 16;
        unsigned _0 : 16;
    } word;

    int32_t doubleWord;
} block32;

typedef union {

    struct
    {
        unsigned _63 : 1;
        unsigned _62 : 1;
        unsigned _61 : 1;
        unsigned _60 : 1;
        unsigned _59 : 1;
        unsigned _58 : 1;
        unsigned _57 : 1;
        unsigned _56 : 1;
        unsigned _55 : 1;
        unsigned _54 : 1;
        unsigned _53 : 1;
        unsigned _52 : 1;
        unsigned _51 : 1;
        unsigned _50 : 1;
        unsigned _49 : 1;
        unsigned _48 : 1;
        unsigned _47 : 1;
        unsigned _46 : 1;
        unsigned _45 : 1;
        unsigned _44 : 1;
        unsigned _43 : 1;
        unsigned _42 : 1;
        unsigned _41 : 1;
        unsigned _40 : 1;
        unsigned _39 : 1;
        unsigned _38 : 1;
        unsigned _37 : 1;
        unsigned _36 : 1;
        unsigned _35 : 1;
        unsigned _34 : 1;
        unsigned _33 : 1;
        unsigned _32 : 1;
        unsigned _31 : 1;
        unsigned _30 : 1;
        unsigned _29 : 1;
        unsigned _28 : 1;
        unsigned _27 : 1;
        unsigned _26 : 1;
        unsigned _25 : 1;
        unsigned _24 : 1;
        unsigned _23 : 1;
        unsigned _22 : 1;
        unsigned _21 : 1;
        unsigned _20 : 1;
        unsigned _19 : 1;
        unsigned _18 : 1;
        unsigned _17 : 1;
        unsigned _16 : 1;
        unsigned _15 : 1;
        unsigned _14 : 1;
        unsigned _13 : 1;
        unsigned _12 : 1;
        unsigned _11 : 1;
        unsigned _10 : 1;
        unsigned _9 : 1;
        unsigned _8 : 1;
        unsigned _7 : 1;
        unsigned _6 : 1;
        unsigned _5 : 1;
        unsigned _4 : 1;
        unsigned _3 : 1;
        unsigned _2 : 1;
        unsigned _1 : 1;
        unsigned _0 : 1;
    } bit;

    struct
    {
        unsigned _15 : 4;
        unsigned _14 : 4;
        unsigned _13 : 4;
        unsigned _12 : 4;
        unsigned _11 : 4;
        unsigned _10 : 4;
        unsigned _9 : 4;
        unsigned _8 : 4;
        unsigned _7 : 4;
        unsigned _6 : 4;
        unsigned _5 : 4;
        unsigned _4 : 4;
        unsigned _3 : 4;
        unsigned _2 : 4;
        unsigned _1 : 4;
        unsigned _0 : 4;
    } nibble;

    struct
    {
        unsigned _7 : 8;
        unsigned _6 : 8;
        unsigned _5 : 8;
        unsigned _4 : 8;
        unsigned _3 : 8;
        unsigned _2 : 8;
        unsigned _1 : 8;
        unsigned _0 : 8;
    } byte;

    struct
    {
        unsigned _3 : 16;
        unsigned _2 : 16;
        unsigned _1 : 16;
        unsigned _0 : 16;
    } word;

    struct
    {
        block32 _1;
        block32 _0;
    } doubleWord;

    int64_t quadword;
} block64;

typedef struct
{
    block32 c;
    block32 d;
} keys;