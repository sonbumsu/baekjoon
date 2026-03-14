#include<stdio.h>
int main(){
    long long n;
    int l;
    if(scanf("%lld %d", &n, &l) != 2) return 0;
    for(int k = l; k <= 100; k++){
        long long sum = (long long)k * (k - 1) / 2;
        if(n - sum >= 0 && (n - sum) % k == 0){
            long long x = (n - sum) / k;
            for(int i = 0; i < k; i++) printf("%lld%c", x + i, (i == k - 1 ? '\n' : ' '));
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}