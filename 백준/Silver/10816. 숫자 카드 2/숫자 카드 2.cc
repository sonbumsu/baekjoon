#include<stdio.h>
#include<stdlib.h>
int adsf(const void *a, const void *b){
    int x = *(int *)a, y = *(int *)b;
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}
int qwer(int *c, int n, int d){
    int l = 0, r = n;
    while(l < r){
        int e = (l + r) / 2;
        if(c[e] < d) l = e + 1;
        else r = e;
    }
    return l;
}
int zxcv(int *c, int n, int d){
    int l = 0, r = n;
    while(l < r){
        int e = (l + r) / 2;
        if(c[e] <= d) l = e + 1;
        else r = e;
    }
    return l;
}
int main(){
    int N, M;
    scanf("%d", &N);
    int *c = (int *)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++) scanf("%d", &c[i]);
    qsort(c, N, sizeof(int), adsf);
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        int x;
        scanf("%d", &x);
        int f = qwer(c, N, x);
        int g = zxcv(c, N, x);
        printf("%d ", g - f);
    }
    free(c);
    return 0;
}