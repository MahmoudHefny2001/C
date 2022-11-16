#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct node *next;
};
 

int main(){
    struct Node head, node1;

    head.data = 10;
    head.next = &node1;

    node1.data = 20;
    node1.next = NULL;

    printf("%d\n", head.data);
    printf("%d\n", node1.data);

    return 0;
}