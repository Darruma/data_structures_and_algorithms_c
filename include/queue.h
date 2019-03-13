#ifndef _queue_h
#define _queue_h

typedef struct {
    int * data;
    int capacity;
    int size;
    int front;
    int back;
} queue;

void enqueue(queue*,int);
int dequeue(queue*);
int peek(queue*);
int empty(queue*);
int full(queue*);
queue* make_queue(int);
void queue_print(queue*);
#endif
