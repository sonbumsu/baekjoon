#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N], b = 0, c = N - 1;
    for(int i = 0; i < N; i++) a[i] = i + 1;
    while(b < c){
        b++;
        c++;
        a[c % N] = a[b % N];
        b++;
    }
    printf("%d\n", a[b % N]);
    return 0;
}
