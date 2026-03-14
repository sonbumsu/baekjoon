#include <stdio.h>
int main() {
    int N, P;
    long long new_score;
    long long scores[55];
    if (scanf("%d %lld %d", &N, &new_score, &P) == EOF) return 0;
    if (N == 0) {
        printf("1\n");
        return 0;
    }
    for (int i = 0; i < N; i++) scanf("%lld", &scores[i]);
    if (N == P && new_score <= scores[N - 1]) {
        printf("-1\n");
        return 0;
    }
    int rank = 1;
    for (int i = 0; i < N; i++) {
        if (scores[i] > new_score) rank++;
        else break;
    }
    printf("%d\n", rank);
    return 0;
}