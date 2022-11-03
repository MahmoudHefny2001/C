#include <stdio.h>

void sort(int numbers[], int length){

    for (int i = 0; i < length; i++){
        for (int j = i+1; j < length; j++){
            if(numbers[i]>numbers[j]){
                int swapper = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = swapper;
            }
        }
    }

}

int main(){
    int numbers[] = {3, 2, 8, 7, 1, 0, 9, 6, 4, 10, 5};
    int length = sizeof(numbers)/sizeof(numbers[0]);

    printf("\nBefore sorting: ");

    for (int i = 0; i < length; i++){
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    sort(numbers, length);

    printf("\nAfter sorting: ");

    for (int i = 0; i < length; i++){
        printf("%d\t", numbers[i]);
    }
    printf("\n");
    return 0;
}