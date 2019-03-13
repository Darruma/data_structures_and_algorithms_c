#include "include/vector.h"
#include "include/linked_list.h"
#include "include/queue.h"
int main() {
   linked_list *l = make_list();
   push_back(l,1);
   push_back(l,2);
   push_back(l,3);
   list_print(l);
}