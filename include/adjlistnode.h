#ifndef _adj_list_node_h
#define _adj_list_node_h
#include "vertex.h"
typedef struct {
  int weight;
  struct adj_list_node *next;
  vertex * from;

} adj_list_node;

adj_list_node* make_adj_list_node(int,struct adj_list_node*,vertex*);

#endif
