
#include "../include/bt_node.h"
#include <stddef.h>
bt_node* make_bt_node(int new_data) {
    bt_node *new_bt_node = (bt_node *)malloc(sizeof(bt_node));
    new_bt_node->data = new_data;
    new_bt_node->left = NULL;
    new_bt_node->right = NULL;
    return new_bt_node;
}
