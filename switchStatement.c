#include <stdio.h>

int main(){
    char grade;

    printf("Enter a letter grade:\t");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Very Good\n");
        break;
    case 'C':
        printf("Good\n");
        break;
    case 'D':
        printf("Succeded\n");
        break;
    case 'F':
        printf("Failed\n");
        break;
    default:
        printf("Not a grade\n");
        break;
    }

    return 0;
}