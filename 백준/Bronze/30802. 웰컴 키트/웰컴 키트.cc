#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    long long s, m, l, xl, xxl, xxxl;
    scanf("%lld %lld %lld %lld %lld %lld", &s, &m, &l, &xl, &xxl, &xxxl);

    long long T, P;
    scanf("%lld %lld", &T, &P);

    long long tshirts = 0;
    long long arr[6] = {s, m, l, xl, xxl, xxxl};
    for (int i = 0; i < 6; i++) {
        tshirts += (arr[i] + T - 1) / T;
    }
    printf("%lld\n", tshirts);

    printf("%lld %lld\n", N / P, N % P);

    return 0;
}
