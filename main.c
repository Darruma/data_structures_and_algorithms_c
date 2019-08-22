#include "./include/bst_tree.h"
#include "stddef.h" 
int main() {
    bst_tree* b = make_bst_tree(10);
    bst_insert(b,1);
    return 0;
}