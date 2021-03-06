#ifndef _vector_h
#include <stdbool.h>
#define _vector_h
typedef struct {
    int size;
    int capacity;
    int* data;

} vector;

vector* make_vector(int);
void push_vector(vector*,int);
bool is_empty(vector*);
int at(vector*,int);
int vectorise(vector*);
void vector_print(vector*);
void insert(vector*,int,int);
void prepend(vector*,int);
int pop(vector*);
void delete(vector*,int);
void remove_element(vector*, int);
int find_element(vector*,int);
#endif