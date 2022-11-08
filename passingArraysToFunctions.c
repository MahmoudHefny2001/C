#include <stdio.h>

void add_one_to_the_array(int array[], int length);

int main(){

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\n");

    int length = sizeof(array)/sizeof(array[0]);

    add_one_to_the_array(array, length);

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("%d  ", array[i]);
    }

    printf("\n");
    

    return 0;
}

void add_one_to_the_array(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        array[i] += 1;
    }
    
}