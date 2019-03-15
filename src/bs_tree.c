#include "../include/bs_tree.h"

#include <stddef.h>

bs_tree* make_bs_tree(void* element) {
  bs_tree* b = malloc(sizeof(bs_tree));
  t_node* t = make_bs_node(element);
  b->head = t;
  return b;
}

void add_node_bst(bs_tree* b,void *element) {
    add_node_recursively(b->head,element);
}
 t_node* add_node_recursively(t_node* current, void* element) {
  if (current == NULL) {
    printf("Created Node with value : %d\n",element);
    return make_bs_node(element);
  }
  if (element < current->data) {
    t_node* left_node = get_left_node(current);
    left_node = add_node_recursively(left_node, element);
    
  } else if (element  > current->data) {
    t_node* right_node = get_right_node(current);
    right_node = add_node_recursively(right_node, element);
  } else {
      return current;
  }
  return current;
}

static t_node* dfs_recursive(t_node * t) {
    if(t != NULL) {
        printf("data : %d \n",t->data);
        dfs_recursive(get_left_node(t));
        dfs_recursive(get_right_node(t));
    }
}

void dfs(bs_tree *b) {
    dfs_recursive(b->head);
}