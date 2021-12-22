#ifndef LINKEDLIST_H
#define LINKEDLIST_H
    
    struct node;
    typedef struct node node_t;
    
    void printList(node_t *head);
    void push(node_t **head_ref, int new_value);
    void deleteNode(node_t **head_ref, int key);

#endif
