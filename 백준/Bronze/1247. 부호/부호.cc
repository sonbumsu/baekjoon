#include<stdio.h>
int main(){
    for(int t = 0; t < 3; t++){
        int N;
        scanf("%d", &N);
        __int128 sum = 0;
        for(int i = 0; i < N; i++){
            long long x;
            scanf("%lld", &x);
            sum += (__int128)x;
        }
        if(sum == 0) printf("0\n");
        else if(sum > 0) printf("+\n");
        else printf("-\n");
    }
    return 0;
}