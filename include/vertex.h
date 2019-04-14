#ifndef _vertex_h
#define _vertex_h

#include "adjlistnode.h"
typedef struct {
  char* label;
  adj_list_node *next;
} vertex;

vertex* make_vertex(char *label);

#endif
