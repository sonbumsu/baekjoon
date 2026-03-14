#include<stdio.h>
#define r 31
#define M 1234567891
int main(){
    int l, i;
    char a[51];
    long long b = 0, R = 1;
    scanf("%d %s", &l, a);
    for(i = 0; i < l; i++){
        b += ((a[i] - 'a' + 1) * R) % M; b %= M;
        R *= r; R %= M;
    }
    printf("%lld", b % M);
    return 0;
}