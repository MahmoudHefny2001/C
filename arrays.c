#include <stdio.h>

int main(){

    double prices[] = {5.0, 6, 1.5, 3.25, 4.75, 8.0};
    
    printf("$%.3lf\n", prices[3]);

    printf("\nprices\n");
    for(int i = 0; i < ( sizeof(prices) / sizeof(prices[0]) ); i++){
        printf("$%.2lf\t\n", prices[i]);
    }

    return 0;
}