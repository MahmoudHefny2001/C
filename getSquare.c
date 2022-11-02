#include <stdio.h>

double square(double number){
    return number * 2;
}

int main(){
    double x = square(9);
    printf("%lf\n", x);
    return 0;
}