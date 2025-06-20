#include <stdio.h>

/**
 * Problem: 
 * Swap variables without using third variable. 
 */

int main() {
    int a = 3; 
    int b = 4;

    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b;

    printf("%d , %d", a, b);
    
    return 0;
}