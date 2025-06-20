#include "../Common/headers.h"

/**
 * Structure: 
 * It is user_defined data type (non-primitive data type).
 * It is collection of related memberse. ("variables").
 * Members can be of different data types.
 * Members are accessed by . or -> operator.
 * If the structure variable is a pointer, use -> (arrow operator).
 * If it's a normal (non-pointer) structure variable, use . (dot operator).
 * Listed under one name in a block of memory.
 * Very similar to classes in other language. (but no mehtods);
 * 
 * Syntax: 
 * struct struct_name {
 *  data_type member1; 
 *  data_type memberN;
 * } struct_variable;
 *  
 * Struct can be stored in stack and heap memory.
 * */

struct Student {
    int roll_no; 
    char name[20];
};


int main() {
    int n, i;
    puts("Enter no of students : ");
    scanf("%d", &n);

    struct Student s[n]; // Variable declaration

    // Input 
    for(i = 0; i < n; i++){
        printf("Enter the roll no & name for %d student: ", i+1);
        scanf("%d %s", &s[i].roll_no , s[i].name);
    }

    // Output 
    for(i = 0; i < n; i++){
        printf("Roll_no: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
    }

    
    return 0;
}