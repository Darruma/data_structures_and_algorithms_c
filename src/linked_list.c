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
  node *current = l->head;
  int i = 0;
  while (current != NULL && i < position ) {
    i = i + 1;
    current = current->next;
  }
  return current->data;
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


void list_print(linked_list *l) {
  node *temp = l->head;
  while(temp != NULL) {
   printf("(%d)->",temp->data);
   temp = temp->next;
 }
 printf("() \n");
}