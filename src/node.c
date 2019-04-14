#include "../include/node.h"
#include <stddef.h>
node* make_node(void* new_data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}