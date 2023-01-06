#ifndef QUEUE_H_INCLUDED

#define QUEUE_H_INCLUDED

#define MAX 10

#include <stdbool.h>

typedef int Type;

typedef struct queue{
    int front;
    int tail;
    Type data[MAX];
}Queue;


void createQueue(Queue *queue){
    queue->front = 0;
    queue->tail = -1;    
}

bool isQueueEmpty(Queue queue){
    if(queue.tail== -1){
        return true;
    }
    return false;
}

bool isQueueFull(Queue queue){
    if(queue.tail == MAX-1){
        return true;
    }
    return false;
}

void Enqueue(Queue *queue, Type item){
    queue->tail++;
    if(queue->tail < MAX){
        queue->data[queue->tail] = item;
    }
    else{
        printf("\nNot allowed queue is full\n");
    }
}
 
Type Dequeue(Queue *queue){
    if(queue->front != queue->tail){
        Type item = queue->data[queue->front];
        queue->front++;
        return item;
    }
    else{
        return -1;
    }
}

#endif // QUEUE_H_INCLUDED


/*
 ----------------------------------------------
 10  9   8   7   6    5    4    3    2    1   0
 ----------------------------------------------
 ^                                            ^   
 |                                            |   
tail                                        front 
*/