#include "include/chained_hash_table.h"
#include "include/node.h"
#include <math.h>
#include <string.h>

chained_hash_table* make_chained_hash_table(int size) {
  chained_hash_table* h = (chained_hash_table*)malloc(sizeof(chained_hash_table));
  h->size - size;
  h->amount = 0;
  node* items= (node *) malloc(sizeof(node) * h->size);
  return h;
} 

void delete_chained_hash_table(chained_hash_table* h) {
  for (int i = 0; i < h->size; i++) {
    free(h->items[i]);
  }
  free(h);
}

