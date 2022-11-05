#include <stdio.h>

int main(){

    int array[] = {1, 2, 3, 4, 5, 6};

    float sum = 0;
    int length = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    float avg = sum/length;

    printf("average is: %.2f\n", avg);
    

    return 0;
}