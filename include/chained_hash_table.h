#ifndef _hash_table_h
#include <stdlib.h>
#include "pair.h"
#define _hash_table_h

typedef struct {
  node* items;
  int size;
  int amount;
} chained_hash_table;

chained_hash_table* make_chained_hash_table(int);
void delete_chained_hash_table(hash_table);
#endif
