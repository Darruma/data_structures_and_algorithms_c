#include "../include/linked_list.h"
#include <stddef.h>

linked_list *make_list() {
  linked_list *l = malloc(sizeof(linked_list));
  l->head = NULL;
  l->tail = NULL;
  return l;
}

int size(linked_list *l) {
  node *current = l->head;
  int size = 0;
  while (current != NULL) {
    size = size + 1;
    current = current->next;
  }
  return size;
}

int empty(linked_list *l) { return (l->head != NULL); }

int value_at(linked_list *l, int position) {
  return node_at(l,position)->data;
}
node* node_at(linked_list *l, int position) {
  node *current = l->head;
  int i = 0;
  while (current != NULL && i < position ) {
    i = i + 1;
    current = current->next;
  }
  return current;
}

void push_front(linked_list *l, int data) {
  node *new_node = make_node(data);
  if (l->head == NULL) {
    l->head = new_node;
  } else {
    new_node->next = l->head;
    l->head = new_node;
  }
}
void remove_value(linked_list *l , int value) {
  node *temp = l->head;
  int value_found = 0;
  int index = 0;
  while(temp != NULL && value_found == 0) {
    index = index + 1;
    if(temp->data == value) {
      value_found = 1;
    }
    temp = temp->next;
  }
  erase(l,index);
}
int pop_front(linked_list *l) {
  if (l->head != NULL) {
    int data = front(l);
    l->head = l->head->next;
    return data;
  }
  return -1;
}

void push_back(linked_list *l, int data) {
  node *new_node = make_node(data);
  if(l->head == NULL) {
    l->head = new_node;
  }
  else if (l->tail == NULL) {
    l->tail = new_node;
    l->head->next = l->tail;
  } else {
    l->tail->next = new_node;
    l->tail = new_node;
  }
}

int pop_back(linked_list *l) {
   if(l->tail != NULL) {
     int data = back(l);
     node *temp = l->head;
     while(&temp != NULL && temp->next != NULL) {
       temp = temp->next;
     }
     l->tail = temp;
     return data;
   }
   return -1;
}

int front(linked_list *l) {
  return l->head->data;
}
int back(linked_list *l) {
  return l->tail->data;
}

void insert(linked_list* l, int position, int data) {
  node *new_node = make_node(data);
  node *before = node_at(l,position -1);
  node *after = node_at(l,position + 1);
  before->next = new_node;
  new_node->next = after;
}

void erase(linked_list *l , int position) {
  node *before = node_at(l,position -1);
  free(node_at(l,position));
  node *after = node_at(l,position +1);
  before->next = after;
}
int value_n_from_end(linked_list *l,int n) {
  return value_at(l,size(l) - n);
}
void list_print(linked_list *l) {
  node *temp = l->head;
  while(temp != NULL) {
   printf("(%d)->",temp->data);
   temp = temp->next;
 }
 printf("() \n");
}

void free_list(linked_list *l) {
  node *temp = l->head;
  node *next = NULL;
  while(temp != NULL) {
    next = temp;
    temp = temp->next;
    free(next);
  }
  free(l);
}

void reverse(linked_list *l) {
  node *previous = NULL;
  node *current = l->head;
  node *next = NULL;
  // swap tail to be head;
  l->tail = l->head;
  while(current != NULL) {
    // reverse pointers
    next = current->next;
    current->next = previous;
    // move pointers ahead by one
    previous = current;
    current = next;
  }
  // head is the last node;
  l->head = previous;
}