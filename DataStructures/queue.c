#include <stdio.h>
#include <stdbool.h>
#include "Headers/queue.h"

void main(){
    Queue queue;
    createQueue(&queue);

    bool isEmpty = isQueueEmpty(queue);
    printf("Is queue empty: %s\n", isEmpty? "True": "False");

    bool isFull = isQueueFull(queue);
    printf("Is queue full: %s\n", isFull? "True": "False");

    Enqueue(&queue, 0);
    Enqueue(&queue, 1);
    Enqueue(&queue, 2);
    Enqueue(&queue, 3);
    Enqueue(&queue, 4);
    Enqueue(&queue, 5);
    Enqueue(&queue, 6);
    Enqueue(&queue, 7);
    Enqueue(&queue, 8);
    Enqueue(&queue, 9);

    isFull = isQueueFull(queue);
    isEmpty = isQueueEmpty(queue);

    printf("\nIs queue empty: %s\n", isEmpty? "True": "False");
    printf("Is queue full: %s\n", isFull? "True": "False");

    Enqueue(&queue, 10);


    Type item = Dequeue(&queue);
    
    printf("\nFirst item was: %d\n", item);
    
    Type secondItem = Dequeue(&queue); 
    
    printf("\nSecond item was: %d\n", secondItem);

    Type thirdItem = Dequeue(&queue);

    printf("\nThird item was: %d\n", thirdItem);

    item = Dequeue(&queue);

    printf("\nFourth item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\nFifth item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\n6th item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\n7th item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\n8th item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\n9th item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\n10th item was: %d\n", item);

    item = Dequeue(&queue);

    printf("\nLast attempt: %d\n", item);

}
