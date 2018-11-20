#include "printf_block.h"

printf_block32 init_printf_block32() {
    printf_block32 pb;
    pb.bits = bits;
    pb.nibbles_d = nibbles_d;
    pb.nibbles_h = nibbles_h;
    pb.bytes_d = bytes_d;
    pb.bytes_h = bytes_h;
    pb.words_d = words_d;
    pb.words_h = words_h;
    pb.doubleWord_d = doubleWord_d;
    pb.doubleWord_h = doubleWord_h;
    pb.all = all;
    return pb;
}

void all(const block32 b) 
{
    bits(b);
    nibbles_d(b);
    nibbles_h(b);
    bytes_d(b);
    bytes_h(b);
    words_d(b);
    words_h(b);
    doubleWord_d(b);
    doubleWord_h(b);
}

void bits(const block32 b)
{
    printf("%u%u%u%u\t %u%u%u%u\t %u%u%u%u\t %u%u%u%u\t %u%u%u%u\t %u%u%u%u\t %u%u%u%u\t %u%u%u%u\t\n", b.bit._0, b.bit._1, b.bit._2, b.bit._3, b.bit._4, b.bit._5, b.bit._6, b.bit._7, b.bit._8, b.bit._9, b.bit._10, b.bit._11, b.bit._12, b.bit._13, b.bit._14, b.bit._15, b.bit._16, b.bit._17, b.bit._18, b.bit._19, b.bit._20, b.bit._21, b.bit._22, b.bit._23, b.bit._24, b.bit._25, b.bit._26, b.bit._27, b.bit._28, b.bit._29, b.bit._30, b.bit._31);
}

void nibbles_d(const block32 b) 
{
    printf("%i\t %i\t %i\t %i\t %i\t %i\t %i\t %i\t\n", b.nibble._0, b.nibble._1, b.nibble._2, b.nibble._3, b.nibble._4, b.nibble._5, b.nibble._6, b.nibble._7);
}

void nibbles_h(const block32 b) 
{
    printf("0x%01X\t 0x%01X\t 0x%01X\t 0x%01X\t 0x%01X\t 0x%01X\t 0x%01X\t 0x%01X\t\n", b.nibble._0, b.nibble._1, b.nibble._2, b.nibble._3, b.nibble._4, b.nibble._5, b.nibble._6, b.nibble._7);
}

void bytes_d(const block32 b) 
{
    printf("\t %i\t\t %i\t\t %i\t\t %i\t\t\n", b.byte._0, b.byte._1, b.byte._2, b.byte._3);
}

void bytes_h(const block32 b) 
{
    printf("\t 0x%0X\t\t 0x%0X\t\t 0x%0X\t\t 0x%0X\n", b.byte._0, b.byte._1, b.byte._2, b.byte._3);
}

void words_d(const block32 b) 
{
    printf("\t\t\t %i\t\t\t\t %i\n", b.word._0, b.word._1);
}

void words_h(const block32 b) 
{
    printf("\t\t\t 0x%03X\t\t\t\t 0x%0X\n", b.word._0, b.word._1);
}

void doubleWord_d(const block32 b) 
{
    printf("\t\t\t\t\t\t\t %u\n", b.doubleWord);
}

void doubleWord_h(const block32 b) 
{
    printf("\t\t\t\t\t\t\t 0x%X\n", b.doubleWord);
}