#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef BIT_ARRAY_H
#define BIT_ARRAY_H

typedef struct {
    int length; 
    uint8_t* bytes;
} bit_array;

void bit_array_init(bit_array*, int);
void bit_array_destroy(bit_array*);
void bit_array_set(bit_array*, int, bool);
void bit_array_print(bit_array*);



#endif
