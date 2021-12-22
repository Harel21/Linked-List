#include<stdio.h>
#include<stdlib.h>

#include "linkedlist.h"

int main(int argc, char const *argv[]) { 
    
    node_t *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 7);
    push(&head, 4);

    printList(head);

    deleteNode(&head, 7);

    printList(head);

    return 0;
}

