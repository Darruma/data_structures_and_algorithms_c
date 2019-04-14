#ifndef _graph_h
#define _graph_h
#include "vertex.h"
#include "pair.h"

typedef struct {
  int size;
} graph;

graph* make_graph(int size);

#endif
