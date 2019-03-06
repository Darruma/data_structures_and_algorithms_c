#include "./data_structures/vector.h"

int main() {
    vector* v = make_vector(10);
    printf("%d",v->capacity);
    printf("\n");
    push_vector(v,4);
    push_vector(v,3);
    push_vector(v,2);
    push_vector(v,1);
    printf("%d",at(v,0));
    return 0;
}