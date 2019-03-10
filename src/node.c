#include "../include/node.h"

node* make_node(int new_data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    return new_node;
}