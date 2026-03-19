#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int compare(const void *a, const void *b) {
    Point *p1 = (Point *)a;
    Point *p2 = (Point *)b;

    if (p1->y < p2->y) return -1;
    if (p1->y > p2->y) return 1;

    if (p1->x < p2->x) return -1;
    if (p1->x > p2->x) return 1;

    return 0;
}

int main() {
    int N;
    if (scanf("%d", &N) == 0) return 0;

    Point *arr = (Point *)malloc(sizeof(Point) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(Point), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    free(arr);
    return 0;
}