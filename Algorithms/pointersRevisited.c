#include <stdio.h>

void getDouble(int *number);

int main(){

    int number = 5;


    getDouble(&number);

    printf("%d\n", number);

    return 0;
}

void getDouble(int *number){
    *number = *number * 2;
}