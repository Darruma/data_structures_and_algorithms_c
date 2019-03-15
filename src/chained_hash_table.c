#include "include/chained_hash_table.h"
#include "include/node.h"
#include <stddef.h>
#include <math.h>
#include <stdbool.h>

chained_hash_table* make_cht(int size) {
  chained_hash_table* h = (chained_hash_table*)malloc(sizeof(chained_hash_table));
  h->size - size;
  h->amount = 0;
  node* items= (node *) malloc(sizeof(node) * h->size);
  return h;
} 

void delete_cht(chained_hash_table* cht) {
  for (int i = 0; i < cht->size; i++) {
    free(cht->items[i]);
  }
  free(cht);
}

int hash( char *str,int size)
{
    unsigned long hash = 5381;
    int c;
    while (c = *str++)
        hash = ((hash << 5) + hash) + c;
    return ((int)hash) % size;
}
void insert_cht(chained_hash_table* cht,char* key,char* value) {
  pair *p = make_pair(key,value);
  int address = hash(key,cht->size);
  node* new_element = make_node(p);
  if(cht->items[address] == NULL) {
    cht->items[address] = new_element;
  } else {
    //traverse until the end then add to end of linked list
    node * tmp = cht->items[address];
    while(tmp != NULL && tmp->next != NULL) {
      tmp = tmp->next;
    }
    tmp->next = new_element;
  }
  cht->amount = cht->amount + 1;
} 

char* search_cht(chained_hash_table* cht,char * key) {
  int address = hash(key,cht->size);
  node *cht_node = cht->items[address];
  if(cht_node == NULL) {
    return -1;
  } else if (cht_node->next == NULL) {
    return cht_node->data;
  } else {
    // traverse cht_node and check for the key 
    node *tmp = cht_node;
    while(tmp !=NULL) {
      pair *p_temp = (pair *) tmp->data;
      if( p_temp->key == key ) {
        return p_temp->value;
      }
      tmp = tmp->next;
    } 
  }
  return NULL;
}

bool exists_cht(chained_hash_table *cht, char * key) {
   return cht->items[hash(key,cht->size)] == NULL;
}
void print_cht(chained_hash_table *cht) {
  for(int i =0; i < cht->size;i++) {
     node *temp = cht->items[i];
     if(temp != NULL){
       printf("%s",temp->data);
       temp = temp->next;
     }
     printf("\n");
  }
}