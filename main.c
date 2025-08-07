#include <stdio.h>
#include "circular_queue.h"

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    int value;
    if (peek(&q, &value)) {
        printf("Front of queue: %d\n", value);
    }

    if (dequeue(&q, &value)) {
        printf("Removed: %d\n", value);
    }

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60); // Should fail if queue is full

    printf("Queue is %s\n", isFull(&q) ? "full" : "not full");
    printf("Queue is %s\n", isEmpty(&q) ? "empty" : "not empty");

    return 0;
}