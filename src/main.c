#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "bignum.h"

int main(int argc, char** argv) {
    bit_array arr;
    bit_array_init(&arr, 9);
    
    bit_array_set(&arr, 0, true);
    bit_array_set(&arr, 1, false);
    bit_array_set(&arr, 2, true);
    bit_array_set(&arr, 3, false);
    bit_array_set(&arr, 4, true);
    bit_array_set(&arr, 5, false);
    bit_array_set(&arr, 6, true);
    bit_array_set(&arr, 7, false);
    bit_array_set(&arr, 8, true);

    bit_array_print(&arr);

    bit_array_destroy(&arr);
    
    return 0;
}
