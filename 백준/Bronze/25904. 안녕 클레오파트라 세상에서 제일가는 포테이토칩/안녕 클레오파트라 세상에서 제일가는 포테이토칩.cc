#include <stdio.h>

int main() {
    int N, X;
    int T[101];
    if (scanf("%d %d", &N, &X) != 2) return 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }
    int current_idx = 0;
    while (1) {
        if (X > T[current_idx]) {
            printf("%d\n", current_idx + 1);
            break;
        }
        X++;
        current_idx = (current_idx + 1) % N;
    }
    return 0;
}