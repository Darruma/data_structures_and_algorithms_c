#include "include/vector.h"
#include "include/linked_list.h"
#include "include/queue.h"
int main() {
    queue *q = make_queue(6);
    enqueue(q,1);
    enqueue(q,2);
    queue_print(q);
    enqueue(q,3);
    queue_print(q);
    enqueue(q,4);
    enqueue(q,5);
    queue_print(q);
    printf("dequeued element %d \n" , dequeue(q));
    queue_print(q);
}