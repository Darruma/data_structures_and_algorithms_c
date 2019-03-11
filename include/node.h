#ifndef _node_h
#define _node_h

typedef struct node {
    int data;
    struct node* next;
} node;

node* make_node(int);
#endif
