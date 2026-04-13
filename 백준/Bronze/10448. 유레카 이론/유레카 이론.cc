#include <stdio.h>

int tri[50];
int tri_count = 0;

void precompute() {
    for (int n = 1; ; n++) {
        int val = n * (n + 1) / 2;
        if (val > 1000) break;
        tri[tri_count++] = val;
    }
}

int is_eureka(int k) {
    for (int i = 0; i < tri_count; i++) {
        for (int j = 0; j < tri_count; j++) {
            for (int l = 0; l < tri_count; l++) {
                if (tri[i] + tri[j] + tri[l] == k) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int T, K;

    precompute();

    if (scanf("%d", &T) == 1) {
        while (T--) {
            scanf("%d", &K);
            printf("%d\n", is_eureka(K));
        }
    }

    return 0;
}