#include <stdio.h>

// Find the mid of the array

int *findMid(int array[], int length);

int main(){

    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array)/sizeof(array[0]);

    int *mid = findMid(array, length);

    printf("%d\n", *mid);

    return 0;
}

int *findMid(int array[], int length){
    return &array[length/2];
}