#include <stdio.h>
#include <stdlib.h>

double add(double number1, double number2){
    return number1 + number2;
}

double subtract(double number1, double number2){
    return number1 - number2;
}

double multiply(double number1, double number2){
    return number1 * number2;
}

double divide(double number1, double number2){
    return number1 / number2;
}

double calculate(char operator, double number1, double number2){
    double result;
    
    switch(operator){
        case '+':
            result = add(number1, number2);
            return result;

        case '-':
            result = subtract(number1, number2);
            return result;

        case '*':
            result = multiply(number1, number2);
            return result;

        case '/':
            if(number2 == 0){
                printf("You can't divide by zero\n");
                exit(-1);
            }
            result = divide(number1, number2);
            return result;

        default:
            printf("\nWrong inputs, please enter a valid input\n");
            return -1;
    }
    
}

int main(){
    char operator;
    double number1, number2, result;
    printf("\nWelcome to my simple calculator program in c\n");
    printf("\nEnter your calculation operator\t: ");
    scanf("%c", &operator);
    
    printf("\nEnter number1:\t");
    scanf("%lf", &number1);
    printf("\nEnter number2:\t");
    scanf("%lf", &number2);
    result = calculate(operator, number1, number2);

    if (result == -1){
        printf("\nEnter a valid inputs\n");
        return 0;
    }
    else{
        printf("\nThe result is: %lf\n\n", result);
    }
    
    return 0;  
}