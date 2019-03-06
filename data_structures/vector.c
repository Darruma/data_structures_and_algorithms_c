#include <stdio.h>
#include "vector.h"

vector *make_vector(int capacity)
{
    vector *v = malloc(sizeof(vector) * capacity);
    v->size = 0;
    v->capacity = capacity;
    v->data = malloc(sizeof(int) * capacity);
    return v;
}

void vector_print(vector *v)
{
  
    if (is_empty(v))
    {
        return "Empty";
    }
    int str_size = (v->size * 2) + 2;
    char str[str_size];
    str[0] = "[";
    for (int i = 1; i < v->size + 1; i++)
    {
        str[i] = v->data[i];
        if (i != v->size)
        {
           str[i+1] = ",";
        }
    }
    str[str_size - 2] = "]";
    str[str_size -1 ] = '\0';
    printf("%s", str);
}

void push_vector(vector *v, int element)
{
    int size = v->size;
    int capacity = v->capacity;
    if (size + 1 <= v->capacity)
    {
        (v->data)[size] = element;
        v->size = size + 1;
    }
    else
    {
        vectorise(v);
        push_vector(v, element);
    }
}

vector *vectorise(vector *v)
{
    int old_capacity = v->capacity;
    int old[old_capacity];
    memcpy(old, v->data, old_capacity);
    v->capacity = v->capacity * 2;
    v->data = malloc(sizeof(int) * v->capacity);
    for (int i = 0; i < old_capacity; i++)
    {
        v->data[i] = old[i];
    }
    return v;
}

int is_empty(vector *v)
{
    if (v->size == 0)
    {
        return 1;
    }
    return 0;
}

int at(vector *v, int position)
{
    return v->data[position];
}

int insert(vector *v, int position)
{
    if (v->size + 1 > v->capacity)
    {
        vectorise(v);
    }
    for (int i = v->size + 1; i > position; i++)
    {
        v->data[i + 1] = v->data[i];
    }
}