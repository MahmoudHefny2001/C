#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);
    printf("\nEnter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("\nThe Hypotenuse is : %lf\n", C);

    return 0;
}