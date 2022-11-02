#include <stdio.h>

void sayHappyBirthday(char name[], int age){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main(){
    char name[] = "Hefny";
    int age = 21;

    sayHappyBirthday(name, age);
    return 0;
}