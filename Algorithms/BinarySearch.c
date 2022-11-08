#include <stdio.h>

int linearSearch(int numbers[], int target, int length);

int binarySearch(int numbers[], int target, int length);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    
    int length = sizeof(numbers)/sizeof(numbers[0]);

    // int index = linearSearch(numbers, 13, length);
    int index = binarySearch(numbers, 3, length);
    
    if(index < 0){
        printf("Not found\n");
    }
    else{
        printf("Target is at index: %d\n", index);
    }
    
    
    return 0;
}

int linearSearch(int numbers[], int target, int length){

    for (int i = 0; i < length; i++){
        if(numbers[i] == target){
            return i;
        }
    }
    return -1;
}

int binarySearch(int numbers[], int target, int length){
    int low = 0;
    int high = length-1;
    int mid = (high+low) / 2;

    while(low <= high){
        if (numbers[mid] == target){
            return mid;
        }
        else if(numbers[mid] > target){
            high = mid-1;
            mid = (high+low) / 2;
        }
        else if(numbers[mid] < target){
            low = mid+1;
            mid = (high+low) / 2;
        }
    }

    return -1;

}