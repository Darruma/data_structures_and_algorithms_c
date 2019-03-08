#include "./data_structures/vector.h"

int main() {
    vector* v = make_vector(2);
    push_vector(v,1);
    push_vector(v,2);
    push_vector(v,3);
    push_vector(v,4);
    push_vector(v,5);
    push_vector(v,7);
    vector_print(v);
    insert(v,5,6);
    vector_print(v);
    prepend(v,-1);
    vector_print(v);
    pop(v);
    vector_print(v);
    delete(v,2);
    vector_print(v);
}