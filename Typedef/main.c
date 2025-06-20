#include "../Common/headers.h"
/**
 * Typedef: 
 * It is a reserverd key that gives "nickname" to existing datatype.
 * 
 * Syntax: 
 * typedef data_type nickname
 */

typedef char user[25];

typedef struct User{
    user name; 
    user location;
} User;



int main() {
    user user1 = "Rehman!"; 
    puts(user1);

    // struct User user2;   old fashion without using typedef

    // With typedef 
    User user2;

    strcpy(user2.name, "Faisal");
    strcpy(user2.location, "Mumbai");

    puts(user2.name);
    puts(user2.location);
    
    return 0;
}