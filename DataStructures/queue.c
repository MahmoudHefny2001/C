#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int queue[256];
int count = 0;
int pointer = 0;

void insert(int value){
    if(count==256){
        fprintf(stderr, "There's no space in the queue\n");
        return;
    }
    queue[count] = value;
    count++;
}

int retrieve(){
    if(pointer == count){
        fprintf(stderr, "Queue is empty\n");
        exit(1);
    }
    int value = queue[pointer];
    pointer++;
    return value;
}

int main(){

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    while(pointer<count){
        int value = retrieve();
        printf("%d\n", value);
    }

    return 0;
}