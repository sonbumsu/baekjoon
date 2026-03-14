#include<stdio.h>
long long asdf(int m, int n){
    if(n > m / 2) n = m - n;
    long long r = 1;
    for(int i = 1; i <= n; i++){
        r = r * (m - i + 1) / i;
    }
    return r;
}
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%lld\n", asdf(M, N));
    }
    return 0;
}