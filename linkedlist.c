#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node* next;
};
typedef struct node node_t;

void printList(node_t *head) {

    node_t *tmp = head;

    while(tmp != NULL){
        printf("%d - ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

void push(node_t **head_ref, int new_value) {
    node_t *new_node = (node_t*)malloc(sizeof(node_t));
    new_node->value = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(node_t **head_ref, int key) {
    // Store head node
    node_t *temp = *head_ref, *prev;
     
    // If head node itself holds the key to be deleted
    if(temp != NULL && temp->value == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // free old head
        return;
    }
     
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while(temp != NULL && temp->value != key) {
        prev = temp;
        temp = temp->next;
    }
     
    // If key was not present in linked list
    if(temp == NULL)
        return;
     
    // Unlink the node from linked list
    prev->next = temp->next;
     
    free(temp); // Free memory
}
