#include <stdio.h>

void add_one(int *number);

int main(){
    int number = 5;

    add_one(&number);

    printf("%d\n", number);

    return 0;
}

void add_one(int *number){
    *number = *number + 1;
}

