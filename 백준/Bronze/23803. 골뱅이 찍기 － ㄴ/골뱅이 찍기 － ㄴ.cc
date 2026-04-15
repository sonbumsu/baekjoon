#include <stdio.h>

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) return 0;

    for (int i = 0; i < 4 * N; i++) {
        for (int j = 0; j < N; j++) {
            printf("@");
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5 * N; j++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}