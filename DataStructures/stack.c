#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int stack[256];
int count = 0;


void push(int value){
    if(count == 256){
        fprintf(stderr, "There's no space in the stack\n");
        return;
    }
    stack[count] = value;
    count++;    
}

int pop(){
    if(count == 0){
        fprintf(stderr, "Stack is empty\n");
        exit(1);
    }
    count--;
    int popped_value = stack[count];
    return popped_value;
}

int main(){

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(256);

    while (count>0){
        int popped_value = pop();
        printf("%d\n", popped_value);
    }
    
    

    return 0;
}