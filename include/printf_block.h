#include <stdio.h>
#include "block.h"

typedef struct printf_block32
{
    void (*bits)(const block32 b);
    void (*nibbles_d)(const block32 b);
    void (*nibbles_h)(const block32 b);
    void (*bytes_d)(const block32 b);
    void (*bytes_h)(const block32 b);
    void (*words_d)(const block32 b);
    void (*words_h)(const block32 b);
    void (*doubleWord_d)(const block32 b);
    void (*doubleWord_h)(const block32 b);
    void (*all)(const block32 b);
} printf_block32;

printf_block32 init_printf_block32();

void all(const block32 b);

void bits(const block32 b);

void nibbles_d(const block32 b);
void nibbles_h(const block32 b);

void bytes_d(const block32 b);
void bytes_h(const block32 b);

void words_d(const block32 b);
void words_h(const block32 b);

void doubleWord_d(const block32 b);
void doubleWord_h(const block32 b);