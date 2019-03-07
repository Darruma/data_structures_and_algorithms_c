#ifndef _vector_h
#define _vector_h
typedef struct {
    int size;
    int capacity;
    int* data;

} vector;

vector* make_vector(int);
void push_vector(vector*,int);
int is_empty(vector*);
int at(vector*,int);
void vectorise(vector*);
void vector_print(vector*);
#endif