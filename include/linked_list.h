#ifndef _linked_list_h
#define _linked_list_h
#include "../include/node.h"
typedef struct {
  node* head;
  node* tail;
} linked_list;

linked_list* make_list();
int size(linked_list*);
int empty(linked_list*);
int value_at(linked_list*, int);
void push_front(linked_list*, int);
int pop_front(linked_list*);
void push_back(linked_list*, int);
int pop_back(linked_list*);
int front(linked_list*);
int back(linked_list*);
void list_print(linked_list*);
#endif
