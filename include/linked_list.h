#ifndef _linked_list_h
#include "node.h"
#define _linked_list_h
typedef struct {
    node* head;
    node* tail;
    int size;
} linked_list;

linked_list* make_list();
#endif

