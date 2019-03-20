#ifndef _bst_tree_h
#define _bst_tree_h
#include "bt_node.h"
typedef struct bst_tree {
    bt_node* head;
    int depth;
} bst_tree;

bst_tree* make_bst_tree(void *);
#endif
