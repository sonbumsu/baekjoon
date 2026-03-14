#include <stdio.h>
#include <string.h>
#define MAX 10000
typedef struct {
    int data[MAX];
    int front;
    int back;
} Queue;

void init(Queue *q) {
    q->front = 0;
    q->back = 0;
}

int empty(Queue *q) {
    return q->front == q->back;
}

int size(Queue *q) {
    return q->back - q->front;
}

void push(Queue *q, int x) {
    q->data[q->back++] = x;
}

int pop(Queue *q) {
    if (empty(q)) return -1;
    return q->data[q->front++];
}

int front(Queue *q) {
    if (empty(q)) return -1;
    return q->data[q->front];
}

int back(Queue *q) {
    if (empty(q)) return -1;
    return q->data[q->back - 1];
}

int main() {
    Queue q;
    init(&q);

    int N, num;
    char command[10];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            scanf("%d", &num);
            push(&q, num);
        } 
        else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop(&q));
        } 
        else if (strcmp(command, "size") == 0) {
            printf("%d\n", size(&q));
        } 
        else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty(&q));
        } 
        else if (strcmp(command, "front") == 0) {
            printf("%d\n", front(&q));
        } 
        else if (strcmp(command, "back") == 0) {
            printf("%d\n", back(&q));
        }
    }
    return 0;
}
