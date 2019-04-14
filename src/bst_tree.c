#include "../include/bst_tree.h"

bst_tree* make_bst_tree(void *data) {
    bst_tree *b = malloc(sizeof(bst_tree));
    bt_node *btn = make_bt_node(data);
    b->head = btn;
    b->depth = 0;
}
