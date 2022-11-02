#include <stdio.h>

double square(double number){
    return number * number;
}

int main(){
    double x = square(9);
    printf("%lf\n", x);
    return 0;
}