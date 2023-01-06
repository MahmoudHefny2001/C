#include <stdio.h>
#include <stdbool.h>
#include "Headers/stack.h"

void createStack(Stack *stack){
    stack->top = -1;
}

bool isStackEmpty(Stack stack){
    if(stack.top < 0){
        return true;
    }
    else{
        return false;
    }
}

bool isStackFull(Stack stack){
    if(stack.top == MAX-1){
        return true;
    }
    else
        return false;
}

void push(Type datum, Stack *stack){
    if(stack->top<MAX-1){
        stack->top++;
        stack->data[stack->top] = datum;
    }
    else{
        printf("\nNot allowed, stack overflow\n");
    }
}

Type pop(Stack *stack){
    if(stack->top>=0){
        Type valueToBeReturned = stack->data[stack->top];
        stack->top -= 1;
        return valueToBeReturned;
    }
    else{
        printf("\nNot allowed, stack underflow\n");
    }
}

// Type pull(Stack *stack){
//     if(stack->top>=0){
//         Type valueToBeReturned = stack->data[stack->top];
//         stack->top--;
//         return valueToBeReturned;
//     }
//     return -1;
// }

int peak(Stack stack){  // return number of elements
    return stack.top+1;
}

void main(){

    Stack stack;

    createStack(&stack); 

    bool empty = isStackEmpty(stack);
    bool full = isStackFull(stack);

    printf("\nBefore pushing items:\n");
    printf("Is stack empty: %s\n", empty? "True": "False");
    printf("Is stack full: %s\n", full? "True": "False");

    push(0, &stack);
    push(1, &stack);
    push(2, &stack);
    push(3, &stack);
    push(4, &stack);
    push(5, &stack);
    push(6, &stack);
    push(7, &stack);
    push(8, &stack);
    push(9, &stack);

    empty = isStackEmpty(stack);
    full = isStackFull(stack);

    printf("\nAfter pushing items:\n");
    printf("Is stack empty: %s\n", empty? "True": "False");
    printf("Is stack full: %s\n", full? "True": "False");

    push(10, &stack);

    int topIndex = peak(stack);
    printf("\nTop index: %d\n", topIndex);

    Type lastItem = pop(&stack);
    printf("Last Item: %d\n", lastItem);


}