#include "../include/vector.h"

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
int pop(vector *v) {
  int v_size = v->size;
  v->size = v_size - 1;
  int pop = v->data[v_size];
  v->data[v_size] = 0;
  return pop;
}
int vectorise(vector *v) {
  if (v->size + 1 > v->capacity) {
    int old_capacity = v->capacity;
    int old_size = v->size;
    int *old = malloc(sizeof(int) * old_size);
    memcpy(old, v->data, sizeof(int) * old_size);
    v->capacity = v->capacity * 2;
    v->data = malloc(sizeof(int) * v->capacity);
    for (int i = 0; i < old_capacity; i++) {
      v->data[i] = old[i];
    }
    return 1;
  }
  return 0;
}

void prepend(vector *v, int element) { insert(v, 0, element); }
int is_empty(vector *v) {
  if (v->size == 0) {
    return 1;
  }
  return 0;
}

void delete (vector *v, int position) {
  for (int i = position; i < v->size; i++) {
    v->data[i] = v->data[i + 1];
  }
  v->data[v->size] = 0;
  v->size = v->size - 1;
}
void remove_element(vector *v, int item) {
  for (int i = 0; i < v->size; i++) {
    if (v->data[i] == item) {
      delete (v, i);
    }
  }
}
int find_element(vector *v, int item) {
  for (int i = 0; i < v->size; i++) {
    if (v->data[i] == item) {
      return i;
    }
  }
  return -1;
}

int at(vector *v, int position) { return v->data[position]; }

void insert(vector *v, int position, int element) {
  vectorise(v);
  for (int i = v->size; i > position - 1; i--) {
    v->data[i + 1] = v->data[i];
  }
  v->data[position] = element;
  v->size = v->size + 1;
}