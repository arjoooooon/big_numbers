#include "bit_array.h"

#ifndef BIGNUM_H
#define BIGNUM_H


typedef struct {
    bit_array repr;
    bool sign_bit;
} bignum;

void bignum_init(char* value);

void bignum_add(bignum* result, bignum* a, bignum* b);
void bignum_subtract(bignum* result, bignum* a, bignum* b);
void bignum_mult(bignum* result, bignum* a, bignum* b);
void bignum_div(bignum* result, bignum* a, bignum* b);
void bignum_mod(bignum* result, bignum* a, bignum* b);

#endif
