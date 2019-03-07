#include "./data_structures/vector.h"

int main() {
    vector* v = make_vector(2);
    vector_print(v);
    printf("\n");
    push_vector(v,4);
    push_vector(v,3);
    vector_print(v);
    push_vector(v,2);
    push_vector(v,1);
    vector_print(v);
    return 0;
}