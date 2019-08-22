#ifndef _bst_tree_h
#define _bst_tree_h
#include "bt_node.h"
typedef struct bst_tree {
    bt_node* head;
} bst_tree;

bst_tree* make_bst_tree(int);
void bst_insert(bst_tree*,int);
void bst_insert_recursive(bt_node*,int);
int bst_get_node_count(bst_tree*);
void bst_print_values(bst_tree*);
void bst_delete_tree(bst_tree*);
void bst_is_in_tree(bst_tree*,int);
int bst_get_height(bst_tree*);
int bst_get_min(bst_tree*);
int bst_get_max(bst_tree*);
int is_bst(bst_tree*);
void bst_delete_value(bst_tree*,int);
void bst_get_successor(bst_tree*);
#endif
