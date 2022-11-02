#include <stdio.h>

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 5};
    int counter = 0;
    int target = 5;

    for(int i = 0; i < ( sizeof(numbers) / sizeof(numbers[0]) ); i++){
        if (numbers[i] == target){
            counter++;
        }
    }
    printf("Number of occurences is: %d\n", counter);
    return 0;
}