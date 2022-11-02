#include <stdio.h>

int main(){
    int age;
    printf("Enter your age:\t");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are now signed up!\n");
    }
    else if(age <= 0){
        printf("You haven't been born yet!\n");
    }
    else{
        printf("You are not allowed to sign up\n");
    }
    return 0;    
}