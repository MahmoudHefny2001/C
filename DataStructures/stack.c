#include <stdio.h>
#include <stdbool.h>

#define MAX 10

typedef char EntryType;

typedef struct{
    
    int top;
    EntryType array[MAX];

}Stack;

void createStack(Stack *stack){
    stack->top = -1;
}

int isEmpty(Stack stack){
    if (stack.top == -1){
        return 1;
    }
    return 0;
}

int isFull(Stack stack){
    if(stack.top == MAX-1){
        return 1;
    }
    return 0;
}

void push(EntryType value, Stack *stack){
    if (stack->top < MAX){
        stack->top += 1;
        stack->array[stack->top] = value;
    }
    else{
        printf("Not allowed stack is full\n");
    }
}

EntryType pop(Stack *stack){
    if(stack->top>-1){
        EntryType toBeReturned = stack->array[stack->top];
        stack->top -= 1;
        return toBeReturned;
    }else{
        return '0';
    }

}

int peak(Stack stack){
    return stack.top;
}

void main(){
    Stack stack;
    createStack(&stack);

    push('M', &stack);
    push('A', &stack);
    push('H', &stack);
    push('M', &stack);
    push('O', &stack);
    push('U', &stack);
    push('D', &stack);


    int is_Empty = isEmpty(stack);
    if (is_Empty == 1){
        printf("Empty\n");
    }
    else{
        printf("Not empty\n");
    }
    
    EntryType returned = pop(&stack);
    if (returned == '0'){
        printf("Stack underflow\n");
    }else{
        printf("%c\n", returned);
    }

    EntryType pulled = pop(&stack);
    printf("Pulled character is: %c\n", pulled);
    
    int peakElement = peak(stack);
    printf("Top is: %d\n", peakElement);

    int i = stack.top;
    for(; i >= 0; i--){
        printf("%c\n",stack.array[i]);
    }

}