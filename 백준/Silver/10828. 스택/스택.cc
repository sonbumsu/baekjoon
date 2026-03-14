#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    int top;
    int length;
    int *data;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
    s->length = 0;
    s->data = (int*)malloc(sizeof(int) * 10000);
}

void push(Stack *s, int x) {
    s->data[s->length++] = x;
    s->top = x;
}

int pop(Stack *s) {
    if (s->length == 0) return -1;
    int val = s->data[--(s->length)];
    if (s->length == 0) s->top = -1;
    else s->top = s->data[s->length - 1];
    return val;
}

int top(Stack *s) {
    if (s->length == 0) return -1;
    return s->top;
}

int size(Stack *s) {
    return s->length;
}

int empty(Stack *s) {
    return s->length == 0 ? 1 : 0;
}

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();

    Stack *stack = (Stack*)malloc(sizeof(Stack));
    initStack(stack);

    char a[20];
    for (int i = 0; i < n; i++) {
        fgets(a, sizeof(a), stdin);
        if (strncmp(a, "push", 4) == 0) {
            int x;
            sscanf(a + 5, "%d", &x);
            push(stack, x);
        } else if (strncmp(a, "pop", 3) == 0) {
            printf("%d\n", pop(stack));
        } else if (strncmp(a, "size", 4) == 0) {
            printf("%d\n", size(stack));
        } else if (strncmp(a, "empty", 5) == 0) {
            printf("%d\n", empty(stack));
        } else if (strncmp(a, "top", 3) == 0) {
            printf("%d\n", top(stack));
        }
    }

    free(stack->data);
    free(stack);
    return 0;
}