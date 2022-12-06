#include <stdio.h>

void segregateZerosAndOnes(int array[], int length);

int main(){

    int array[] = {1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0};

    int length = sizeof(array)/sizeof(array[0]);

    segregateZerosAndOnes(array, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    return 0;
}

void segregateZerosAndOnes(int array[], int length){
    int zeros = 0;

    for(int i = 0; i < length; i++){
        if(array[i] == 0){
            zeros++;
        }
    }

    for(int i = 0; i < zeros; i++){
        array[i] = 0;
    }

    for(int i = zeros; i < length; i++){
        array[i] = 1;
    }
    

}

