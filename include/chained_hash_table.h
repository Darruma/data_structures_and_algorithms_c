#ifndef _hash_table_h
#include <stdlib.h>
#include <stdbool.h>
#include "pair.h"
#define _hash_table_h

typedef struct {
  node* items;
  int size;
  int amount;
} chained_hash_table;

chained_hash_table* make_chained_hash_table(int);
void delete_cht(chained_hash_table*);
void insert_cht(chained_hash_table*,char*,char*);
int hash(char*,int);
bool exists_cht(chained_hash_table*,char*);
void print_cht(chained_hash_table*);
#endif
