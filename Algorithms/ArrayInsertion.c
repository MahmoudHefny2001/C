#include <stdio.h>
#define MAX 5

void main(){
    int numbers[MAX] = {2, 3, 4, 5};
    int NumberOfElements = 4;
    int i = 0; //loop variable
    int value = 1;  // new data to be stored in the array
    
    printf("Array before insertion:\n");
    for(int i = 0; i < NumberOfElements; i++){
    	printf("%d\t", numbers[i]);
    }
    printf("\n");

    
    for(i = NumberOfElements; i >= 0 ; i--){
    	numbers[i+1] = numbers[i];
    }
    numbers[0] = value;
    NumberOfElements++;
	
    printf("Array after insertion:\n");
    for(int i = 0; i < NumberOfElements; i++){
        printf("%d\t", numbers[i]);
    }
    printf("\n");

}
