#include <stdio.h>

double findMax(double number1, double number2){
    // if (number1 > number2){
    //     return number1;
    // }
    // return number2;

    return (number1 > number2) ? number1 : number2 ;
}

int main(){

    double max = findMax(20, 80);

    printf("Maximum is: %lf\n", max);

    return 0;
}