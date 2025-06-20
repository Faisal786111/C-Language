#include <stdio.h>

// #define -> Preprocessor which is used to create macros and constants

// Constant macros 
#define x 5


// Use printf without semicolon(;)
// Two techniques: 
// 1. Using pre-processor
#define y printf("Hello world");

#define version 1 


#define VERSION 2



int main(){
    int i = x; 
    
    printf("%d\n", i);

    y // Print hello world

    // 2. Using if statement
    if(printf("Hello world\n")){

    }
    
    // It is used to compile different code based on the macros vlaues
    #if VERSION == 1
        printf("Old version\n");
    #elif VERSION == 2
        printf("New version\n");
    #else
        printf("Unknown version\n");
    #endif
    return 0;
}