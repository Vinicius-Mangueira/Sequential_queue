#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#define MAX 5

typedef struct {
    int data[MAX];
    int start;
    int end;
    int size;
} Queue;

void initQueue(Queue *q);
int isEmpty(Queue *q);
int isFull(Queue *q);
int enqueue(Queue *q, int value);
int dequeue(Queue *q, int *removed);
int peek(Queue *q, int *front);

#endif