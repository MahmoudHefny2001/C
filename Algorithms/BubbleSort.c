#include <stdio.h>

void BubbleSort(int array[], int length);

int main(){

    int myArray[] = {10, 0, 3, 1, 5, 2, 6, 4, 7, 9, 11, 8};

    int length = sizeof(myArray)/sizeof(myArray[0]);

    printf("Before sorting: \n\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    BubbleSort(myArray, length);

    printf("\nAfter sorting: \n\n");
    
    for (int i = 0; i < length; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

void BubbleSort(int array[], int length){

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length-1-i; j++)
        {
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        
    }
    
    
}