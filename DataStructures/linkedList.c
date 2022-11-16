#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void print_data(struct node *head);

int main(){

    struct node node1, node2, node3;
    struct node *head;

    node1.data = 10;
    node2.data = 20;
    node3.data = 45;

    head = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    print_data(head);

    return 0;
}

void print_data(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d - ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}