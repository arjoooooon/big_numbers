#include <stdio.h>
#include <stdbool.h>

#include "bit_array.h"

void bit_array_init(bit_array* arr, uint32_t length) {
    arr -> length = length;
    arr -> bytes = (uint8_t*)malloc(sizeof(uint8_t) * ceil(length/8)); 
}

void bit_array_destroy(bit_array* arr) {
    free(arr -> bytes);
}

void bit_array_set(bit_array* arr, uint32_t index, bool value) {
    if(index > arr -> length) perror("Index of of bounds");
    
    uint8_t bitmask = 1LU << (index % 8);
    if(value) arr -> bytes[index / 8] |= bitmask;
    else arr -> bytes[index / 8] &= ~bitmask;
}


bool bit_array_read(bit_array* arr, uint32_t index) {
    if (index > arr -> length) perror("Index out of bounds");

    uint8_t bitmask = 1LU << (index % 8);
    uint8_t result = (arr -> bytes)[index / 8] & bitmask;

    return result > 0;
}

void bit_array_flip(bit_array* arr, uint32_t index) {
    if (index > arr -> length) perror("Index out of bounds");

    uint8_t bitmask = 1LU << (index % 8);
    (arr -> bytes)[index / 8] ^= bitmask;
}

void bit_array_print(bit_array* arr) {
    int num_bytes = ceil( (float)arr -> length / 8 ); 
    printf("["); 
    if (arr -> length % 8 == 0) {
    
        for(int i = 0; i < num_bytes; i++) {
            for(int j = 1; j < 256; j <<= 1) {
                printf("%d ", (arr -> bytes[i] & j) > 0);
            }
        }
        printf("\n");
    } else {

        for(int i = 0; i < num_bytes-1; i++) {
            for(int j = 1; j < 256; j <<= 1) {
                printf("%d ", (arr -> bytes[i] & j) > 0);
            }
        }
        for(int j = 1; j < 1 << arr -> length % 8; j <<= 1) {
            printf("%d ", (arr -> bytes[num_bytes-1] & j) > 0);
        }
    }
    printf("]\n");
}
