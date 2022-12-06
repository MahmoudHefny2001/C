#include <stdio.h>

void Minimum_Maximum(int array[], int length, int *minimum, int *maximum);

/*
    int array[] = {23, 45, 6, 98};

    int minimum, maximum;
    minimum = maximum = array[0];
    
    for (int i = 1; i < sizeof(array)/sizeof(array[0]); i++){
        if (array[i] < minimum){
            minimum = array[i];
        }
        if (array[i] > maximum){
            maximum = array[i];
        }
    }
*/

int main(){

    int array[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
    int minimum, maximum;
    int length = sizeof(array)/sizeof(array[0]);
    Minimum_Maximum(array, length, &minimum, &maximum);
    printf("Minimum value in the array is: %d and Maximum value is: %d\n", minimum, maximum);

    return 0;
}


void Minimum_Maximum(int array[], int length, int *minimum, int *maximum){
    *minimum = *maximum = array[0];
    for (int i = 0; i < length; i++){
        if(array[i] > *maximum){
            *maximum = array[i];
        }
        if(array[i] < *minimum){
            *minimum = array[i];
        }
    }
    
}