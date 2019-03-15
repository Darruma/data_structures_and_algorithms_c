#include "../include/t_node.h"
#include <stddef.h>

t_node* make_t_node(void* new_data) {
  t_node* new_node = (t_node*)malloc(sizeof(t_node));
  new_node->data = new_data;
  new_node->child_amount = 0;
  new_node->max_child_amount = 100;
  new_node->children = malloc(sizeof(t_node) * 100);
  return new_node;
}
t_node* make_bs_node(void* new_data) {
  t_node* new_node = (t_node*)malloc(sizeof(t_node));
  new_node->data = new_data;
  new_node->child_amount = 0;
  new_node->max_child_amount = 2;
  new_node->children = malloc(2,sizeof(t_node));
  return new_node;
}

void add_child(t_node* n, void* data) {
  if (n->child_amount > n->max_child_amount) {
    t_node* new = make_t_node(data);
    n->child_amount = n->child_amount + 1;
    n->children[n->child_amount] = *new;
  }
}
void set_child(t_node* n, int position, void* data) {
  if (position > n->child_amount) {
    t_node* new = make_t_node(data);
    n->children[position] = *new;
  }
}

t_node* get_left_node(t_node* t) {
  if (t->max_child_amount == 2) {
    return &(t->children[0]);
  }
  return NULL;
}


t_node* get_right_node(t_node* t) {
  if (t->max_child_amount == 2) {
    return &(t->children[1]);
  }
  return NULL;
}