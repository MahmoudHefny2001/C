#include <stdio.h>

int main(){
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int length = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < 1; i++){
        for(int j = length-1; j >= (length/2); j--){
            int swapper = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = swapper;
            i++;
        }
    }

    for (int k = 0; k < length; k++){
        printf("%d\t", numbers[k]);
    }
    printf("\n");
    return 0;
}