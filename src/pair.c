#include "../include/pair.h"

pair* make_pair(void* key ,void* val ) {
    pair *p = (pair*) malloc(sizeof(pair));
    p->key = key;
    p->value = val;
    return p;
}
void delete_pair(pair* p ) {
    free(p->key);
    free(p->value);
    free(p); 
}