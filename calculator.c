#include <stdio.h>
#include <stdlib.h>

int add(int x, int y){
    return x+y;
}

int multiply(int x, int y){
    return x*y;
}

int subtract(int x, int y){
    return x-y;
}

int divide(int x, int y){
    if(y == 0){
      printf("Division by zero not allowed! Exiting...\n");
      exit(-1);
    }
    return x/y;
}

int main() {
   printf("This is a simple calculator: \n");
   printf("Enter number '1': ");
   
   int firstNumber = 0;
   scanf("%d", &firstNumber);
   
   printf("Enter '1' for addition, '2' for subtration, '3' for multiplication, '4' for divison: ");
   int operator;
   scanf("%d", &operator);
   if (operator > 4)
    {
        printf("wrong Input\n");
        return -1;
    }

   printf("Enter number '2': ");
   int secondNumber = 0;   
   scanf("%d", &secondNumber);

   if (operator == 1)
        {
            int value = add(firstNumber, secondNumber);
            printf("%d", value);
            printf(" ");   
        } 
    else if (operator == 2)
        {
            int value = subtract(firstNumber, secondNumber);
            printf("%d", value);
            printf(" ");   
        }

    else if (operator == 3)
        {
            int value = multiply(firstNumber, secondNumber);
            printf("%d", value);
            printf(" ");   
        }


    else
        {
            int value = divide(firstNumber, secondNumber);
            printf("%d", value);
            printf(" ");   
        }

    
    

    printf("\n");

   return 0;
}