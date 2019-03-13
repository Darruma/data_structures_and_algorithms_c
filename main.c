#include "include/vector.h"
#include "include/linked_list.h";
int main() {
    linked_list *l = make_list();
    push_front(l,5);
    push_front(l,2);
    list_print(l);
    reverse(l);
    list_print(l);
    free_list(l);
}