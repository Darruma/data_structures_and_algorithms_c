#ifndef _pair_h
#include <stdlib.h>
#define _pair_h
typedef struct {
  char* key;
  char* value;
} pair;

pair* make_pair(char*,char*);
void delete_pair(pair*);
#endif
