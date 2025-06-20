#include <stdio.h>
#include <stdint.h>

/**
 * unsigned numbers: Only store positive numbers (eg: 0, +5 etc)
 * 
 * Types: 
 * unit8_t  -> 8bits
 * uint16_t -> 16bits
 * uint32_t -> 32bits
 * uint64_t -> 64bits
 * 
 * Header file: 
 *  <stdint.h>
 * 
 * Format specifier: 
 * %u
 * 
 * When to use : 
 * When you want to store only positive numbers then use unsigned data types
 */

int main(){
    uint8_t a = 255;
    uint16_t b = 255;
    uint32_t c = 255;
    uint64_t d = 255;

    printf("a = %u\n", a);
    a += 1; // a = 255 + 1 -> 0
    printf("a = %u\n", a); // Dipslay 1 
    printf("b = %u\n", b);
    printf("c = %u\n", c);
    printf("d = %u\n", d);
    return 0;
}