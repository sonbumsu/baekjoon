#include<stdio.h>
#include<stdlib.h>
int main(){
    int T;
    if(scanf("%d", &T) != 1) return 0;
    while(T--){
        long long x1, y1, r1, x2, y2, r2;
        scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2);
        long long d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        long long s = (r1 + r2) * (r1 + r2);
        long long di = (r1 - r2) * (r1 - r2);
        if(d == 0 && r1 == r2) printf("-1\n");
        else if (d == s || d == di) printf("1\n");
        else if (d > di && d < s) printf("2\n");
        else printf("0\n");
    }
    return 0;
}