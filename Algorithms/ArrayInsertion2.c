#include <stdio.h>
#define MAX 5 

void main(){
    int array[MAX] = {1, 2, 4, 5};
    int indexOfInsertion = 2;
    int valueToBeInserted = 3;

    int i = sizeof(array)/sizeof(array[i]);
    while(i > indexOfInsertion){
    	array[i] = array[i-1];
    	i--;
    }

    array[indexOfInsertion] = valueToBeInserted;

    for(int i = 0; i < MAX; i++){
    	printf("%d\n", array[i]);
    }

}
