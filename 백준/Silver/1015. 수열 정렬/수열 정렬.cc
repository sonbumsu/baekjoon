#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int v;
    int o;
} e;

int c(const void *a, const void *b){
    e *e1 = (e *)a;
    e *e2 = (e *)b;
    if(e1 -> v != e2 -> v){
        return e1 -> v - e2 -> v;
    }
    return e1 -> o - e2 -> o;
}

int main(){
    int N;
    if(scanf("%d", &N) != 1) return 0;
    e A[50];
    int P[50];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i].v);
        A[i].o = i;
    }
    qsort(A, N, sizeof(e), c);
    for(int i = 0; i < N; i++){
        P[A[i].o] = i;
    }
    for(int i = 0; i < N; i++){
        printf("%d ", P[i]);
    }
    return 0;
}