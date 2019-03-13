#ifndef _node_h
#define _node_h

typedef struct node {
    void *data;
    struct node* next;
} node;

node* make_node(void *);
#endif
