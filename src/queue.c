#include "../include/queue.h";
#include <stdio.h>
#include <stdlib.h>
queue* make_queue(int cap) {
  queue* q = malloc(sizeof(queue));
  q->capacity = cap;
  q->size = 0;
  q->data = malloc(sizeof(int) * cap);
  q->front = 0;
  q->back = cap - 1;
  return q;
}
int empty(queue* q) { return q->size == 0; }
int full(queue* q) { return q->capacity == q->size; }
int peek(queue* q) { return q->data[q->front]; }
int dequeue(queue* q) {
   if(!empty(q)) {
       int value = q->data[q->front];
       q->front = (q->front + 1) % q->capacity;
       q->size = q->size - 1;
       return value;
   }
   return -1;

}
void enqueue(queue* q, int element) {
  if (!full(q)) {
   q->back = (q->back + 1) % q->capacity;
   q->data[q->back] = element;
   q->size = q->size + 1;
  }
}

void queue_print(queue* q) {

    for(int j = q->front; j < q->back + 1;j++) {
        printf("%d ",q->data[j]);
    }
    printf("\n");
  
}