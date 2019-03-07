#include "vector.h"
#include <stdio.h>

vector *make_vector(int capacity) {
  vector *v = malloc(sizeof(vector) * capacity);
  v->size = 0;
  v->capacity = capacity;
  v->data = malloc(sizeof(int) * capacity);
  return v;
}

void vector_print(vector *v) {
  if (is_empty(v)) {
    printf("empty");
  } else {
    printf("[");
    for (int i = 0; i < v->size; i++) {
      printf("%d", v->data[i]);
      if (i != v->size - 1) {
        printf(",");
      }
    }
    printf("] \n");
  }
}

void push_vector(vector *v, int element) {
  int size = v->size;
  int capacity = v->capacity;
  if (size + 1 <= v->capacity) {
    v->data[size] = element;
    v->size = size + 1;
  } else {
    vectorise(v);
    push_vector(v, element);
  }
}

void vectorise(vector *v) {
  int old_capacity = v->capacity;
  int old_size = v->size;
  int *old = malloc(sizeof(int) * old_size);
  memcpy(old, v->data,sizeof(int) * old_size);
  for(int j =0; j < old_size;j++){
      printf("%d\n",old[j]);
  }
  v->capacity = v->capacity * 2;
  v->data = malloc(sizeof(int) * v->capacity);
  for (int i = 0; i < old_capacity; i++) {
    v->data[i] = old[i];
  }
}

int is_empty(vector *v) {
  if (v->size == 0) {
    return 1;
  }
  return 0;
}

int at(vector *v, int position) { return v->data[position]; }

int insert(vector *v, int position) {
  if (v->size + 1 > v->capacity) {
    vectorise(v);
  }
  for (int i = v->size + 1; i > position; i++) {
    v->data[i + 1] = v->data[i];
  }
}