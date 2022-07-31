#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "bignum.h"

int main(int argc, char** argv) {
    bit_array arr;
    bit_array_init(&arr, 9);
    
    bit_array_set(&arr, 0, 1);
    bit_array_set(&arr, 1, 0);
    bit_array_set(&arr, 2, 1);
    bit_array_set(&arr, 3, 0);
    bit_array_set(&arr, 4, 1);
    bit_array_set(&arr, 5, 0);
    bit_array_set(&arr, 6, 1);
    bit_array_set(&arr, 7, 0);
    bit_array_set(&arr, 8, 1);

    bit_array_print(&arr);
    bit_array_flip(&arr, 6);
    bit_array_print(&arr);

    bit_array_destroy(&arr);
    
    return 0;
}
