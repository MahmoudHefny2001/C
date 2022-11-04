#include <stdio.h>

// enum  = a user defined type of named integer identifiers
//          helps to make a program more readable

enum Day{Friday = 1, Saturday = 2 , Sunday = 3, Monday = 4, Tuesday = 5, Wednesday = 6, Thursday = 7};

int main(){

    enum Day today = Thursday;

    printf("%d\n", today);

    return 0;
}