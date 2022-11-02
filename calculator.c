#include <stdio.h>
#include <stdlib.h>

double add(double x, double y){
    return x+y;
}

double multiply(double x, double y){
    return x*y;
}

double subtract(double x, double y){
    return x-y;
}

double divide(double x, double y){
    if(y == 0){
      printf("Division by zero not allowed! Exiting...\n");
      exit(-1);
    }
    return x/y;
}

int main() {
   printf("This is a simple calculator: \n");
   printf("Enter number '1': ");
   
   double firstNumber = 0;
   scanf("%lf", &firstNumber);
   
   printf("Enter '1' for addition, '2' for subtration, '3' for multiplication, '4' for divison: ");
   int operator;
   scanf("%d", &operator);
   if (operator > 4)
    {
        printf("wrong Input\n");
        return -1;
    }

   printf("Enter number '2': ");
   double secondNumber = 0;   
   scanf("%lf", &secondNumber);

   if (operator == 1)
        {
            double value = add(firstNumber, secondNumber);
            printf("%lf", value);
            printf(" ");   
        } 
    else if (operator == 2)
        {
            double value = subtract(firstNumber, secondNumber);
            printf("%lf", value);
            printf(" ");   
        }

    else if (operator == 3)
        {
            double value = multiply(firstNumber, secondNumber);
            printf("%lf", value);
            printf(" ");   
        }


    else
        {
            double value = divide(firstNumber, secondNumber);
            printf("%lf", value);
            printf(" ");   
        }

    
    

    printf("\n");

   return 0;
}