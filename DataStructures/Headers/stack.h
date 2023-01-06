#ifndef STACK_H_INCLUDED

#define STACK_H_INCLUDED

#define MAX 10

#include <stdbool.h>

typedef int Type;

typedef struct stack{
    int top;
    Type data[MAX];
}Stack;

void createStack(Stack *stack);

bool isStackEmpty(Stack stack);
bool isStackFull(Stack stack);

void push(Type datum, Stack *stack);
Type pop(Stack *stack);

// Type pull(Stack *stack);

int peak(Stack stack);

#endif // STACK_H_INCLUDED