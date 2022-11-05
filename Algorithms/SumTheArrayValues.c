#include <stdio.h>

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int summation = 0;

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        summation += numbers[i];
    }
    
    printf("%d\n", summation);

    return 0;
}