#include <stdio.h>

int main(){
    int array[] = {10, 0, 5, 4, 1, 2, 8, 3, 9, 6, 7, 11, -8};
    int minimum = array[0];
    for (int i = 0; i < 13; i++){
        if (array[i]< minimum){
            minimum = array[i];
        }
    }
    printf("The minimum number is %d\n: ", minimum);
    return 0;
}