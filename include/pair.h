#ifndef _pair_h
#define _pair_h
typedef struct {
  void* key;
  void* value;
} pair;

pair* make_pair(void*,void*);
void delete_pair(pair*);
#endif
