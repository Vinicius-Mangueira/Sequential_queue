#include "circular_queue.h"
#include <stdio.h>

void initQueue(Queue *q) {
    q->start = 0;
    q->end = 0;
    q->size = 0;
}

int isEmpty(Queue *q) {
    return q->size == 0;
}

int isFull(Queue *q) {
    return q->size == MAX;
}

int enqueue(Queue *q, int value) {
    if (isFull(q)) return 0;
    q->data[q->end] = value;
    q->end = (q->end + 1) % MAX;
    q->size++;
    return 1;
}

int dequeue(Queue *q, int *removed) {
    if (isEmpty(q)) return 0;
    *removed = q->data[q->start];
    q->start = (q->start + 1) % MAX;
    q->size--;
    return 1;
}

int peek(Queue *q, int *front) {
    if (isEmpty(q)) return 0;
    *front = q->data[q->start];
    return 1;
}