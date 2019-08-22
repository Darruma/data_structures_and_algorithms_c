#include "../include/bst_tree.h"
#include "stddef.h"
bst_tree *make_bst_tree(int data)
{
    bst_tree *b = malloc(sizeof(bst_tree));
    bt_node *btn = make_bt_node(data);
    b->head = btn;
}

void bst_insert(bst_tree *b, int data)
{
    bst_insert_recursive(b->head, data);
} 
void bst_insert_recursive(bt_node *root, int data)
{
    if (root)
    {
        if (data < root->data)
        {
            bt_node* left = root->left;
            bst_insert_recursive(left, data);
        }
        else if (data > root->data)
        {
            bt_node* right = root->right;
            bst_insert_recursive(right, data);
        }
    }
    else
    {
        printf("Making new node");
        root = make_bt_node(data);
    }
}

int bst_get_node_count(bst_tree *b)
{
    bst_get_node_count_recursive(b->head);
}
int bst_get_node_count_recursive(bt_node *btn)
{
    if (btn->left == NULL && btn->left == NULL)
    {
        return 1;
    }
    else
    {
        return 1 + bst_get_node_count_recursive(btn->left) + bst_get_node_count_recursive(btn->right);
    }
}