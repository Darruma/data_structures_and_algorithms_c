#ifndef _bs_tree_h
#include "t_node.h";
#define _bs_tree_h

typedef struct bs_tree {
     t_node *head;
} bs_tree;

bs_tree* make_bs_tree(void*);
void add_node_bst(bs_tree*,void*);
static t_node* add_node_recursively(t_node*,void*);
static t_node* dfs_recursive(t_node*);
void dfs(bs_tree*);
#endif
