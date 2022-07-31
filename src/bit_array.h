#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef BIT_ARRAY_H
#define BIT_ARRAY_H

typedef struct {
    uint32_t length; 
    uint8_t* bytes;
} bit_array;

void bit_array_init(bit_array*, uint32_t);
void bit_array_destroy(bit_array*);

void bit_array_set(bit_array*, uint32_t, bool);
bool bit_array_read(bit_array*, uint32_t);
void bit_array_flip(bit_array*, uint32_t);

void bit_array_print(bit_array*);


#endif
