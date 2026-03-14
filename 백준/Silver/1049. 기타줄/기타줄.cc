#include<stdio.h>
int main(){
    int n, m;
    int mp = 1001, ms = 1001;
    if(scanf("%d %d", &n, &m) != 2) return 0;
    for(int i = 0; i < m; i++){
        int p, s;
        scanf("%d %d", &p, &s);
        if(p < mp) mp = p;
        if(s < ms) ms = s;
    }
    int c1 = n * ms, pc = (n / 6);
    if(n % 6 != 0) pc++;
    int c2 = pc * mp, c3 = (n / 6) * mp + (n % 6) * ms, r = c1;
    if(c2 < r) r = c2;
    if(c3 < r) r = c3;
    printf("%d\n", r);
    return 0;
}