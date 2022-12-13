#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;


int main(){

    Node head, node1, node2, node3, node4;

    head.data = 1;
    head.next = &node1;

    node1.data = 2;
    node1.next = &node2;

    node2.data = 3;
    node2.next = &node3;

    node3.data = 4;
    node3.next = &node4;
    
    node4.data = 5;
    node4.next = NULL;

    Node* node;
    node = &head;

    while(node->next != NULL){
        printf("%d\n", node->data);
        node = node->next;
    }

    return 0;
}