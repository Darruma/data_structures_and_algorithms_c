#include "../include/t_node.h"
#include <stddef.h>

t_node* make_node(void* new_data) {
    t_node *new_node = (t_node *)malloc(sizeof(t_node));
    new_node->data = new_data;
    new_node->child_amount = 0;
    new_node->max_child_amount = 100;
    new_node->children = malloc(sizeof(t_node) * 100);
    return new_node;
}
t_node* make_bsnode(void* new_data) {
    t_node *new_node = (t_node *) malloc(sizeof(t_node));
    new_node->data = new_data;
    new_node->child_amount = 0;
    new_node->max_child_amount = 2;
    new_node->children = malloc(sizeof(t_node) * 2);
}

