#include <stdio.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node ;

int main(){

    Node head, node1, node2, node3;

    head.data = 5;
    head.next = &node1;

    node1.data = 10;
    node1.next = &node2;

    node2.data = 20;
    node2.next = &node3;

    node3.data = 15;
    node3.next = NULL;

    while(head.next != NULL){
        printf("%d\n", head.data);
        head.next = &head.next ;
    }

    return 0;
}
