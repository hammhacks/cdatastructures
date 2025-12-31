#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

/* Initialize the queue */
void initQueue(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

/* Check if the queue is empty */
int isEmpty(Queue *q) {
    return q->size == 0;
}

/* Check if the queue is full */
int isFull(Queue *q) {
    return q->size == MAX_SIZE;
}

/* Add an element to the queue */
int enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return 0;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->data[q->rear] = value;
    q->size++;
    return 1;
}

/* Remove an element from the queue */
int dequeue(Queue *q, int *removedValue) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return 0;
    }

    *removedValue = q->data[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    q->size--;
    return 1;
}

/* Get the front element without removing it */
int peek(Queue *q, int *value) {
    if (isEmpty(q)) {
        return 0;
    }

    *value = q->data[q->front];
    return 1;
}

/* Test the queue */
int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    int value;
    if (peek(&q, &value)) {
        printf("Front element: %d\n", value);
    }

    while (!isEmpty(&q)) {
        dequeue(&q, &value);
        printf("Dequeued: %d\n", value);
    }

    return 0;
}

