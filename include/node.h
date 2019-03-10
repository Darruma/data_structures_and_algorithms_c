#ifndef _node_h

#define _node_h

typedef struct node {
    int data;
    struct node* next;
} node;

node* make_node(int new_data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    return new_node;
}
node * make_node(int);
#endif
