#include<stdio.h>
int main(){
    int M, n, x;
    long long sum = 0, sum_xor = 0;
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &n);
        if(n == 1){
            scanf("%d", &x);
            sum += x;
            sum_xor ^= x;
        }
        else if(n == 2){
            scanf("%d", &x);
            sum -= x;
            sum_xor ^= x;
        }
        else if(n == 3) printf("%lld\n", sum);
        else printf("%lld\n", sum_xor);
    }
    return 0;
}
