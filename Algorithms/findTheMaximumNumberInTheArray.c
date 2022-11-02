#include <stdio.h>

int main(){
    int array[] = {3, 0, 5, 4, 2, 1, 8, 6, 7, 10, 9, 11, -1, 80};
    int maximum = array[0];
    for(int i = 0; i < ( sizeof(array) / sizeof(array[0]) ); i++){
        if(array[i] > maximum){
            maximum = array[i];
        }
    }
    printf("The maximum number is: %d\n", maximum);
    return 0;
}