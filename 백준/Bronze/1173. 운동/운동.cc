#include<stdio.h>
int n, m, M, t, r, min, p;
int main(){
    scanf("%d %d %d %d %d", &n, &m, &M, &t, &r);
    if(M - m < t){
        printf("-1");
        return 0;
    }

    p = m;
    while(1){
        if(p + t <= M){
            p += t;
            n--;
        }
        else{
            p -= r;
            if(p < m) p = m;
        }
        min++;
        if(n == 0){
            printf("%d", min);
            return 0;
        }
    }
}
