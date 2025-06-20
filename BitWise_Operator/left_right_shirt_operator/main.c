#include <stdio.h> 

int main() {
    int x = 3; 

    /**
     * x = 3; 
     * 3 << 1 
     * 3 * 2^1 = 6
     * 
     * x = 3;
     * 3 << 4 
     * 3 * 2^1 = 48
     */

    puts("Left shift operator: ");
    printf("%d\n", x << 1);
    printf("%d\n", x << 4);

    puts("");
    puts("Right shift operator: "); 
    printf("%d\n", x >> 1);
    printf("%d\n", x >> 4);


    return 0;
}