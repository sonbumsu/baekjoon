#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    int g;
    char m[101];
    int o;
} asdf;
int asdfg(const void *a, const void *b) {
    asdf *m1 = (asdf*)a;
    asdf *m2 = (asdf*)b;
    if(m1 -> g != m2 -> g) return m1 -> g - m2 -> g;
    return m1 -> o - m2 -> o;
}
int main(){
    int n;
    scanf("%d", &n);
    asdf *r = (asdf*)malloc(sizeof(asdf) * n);
    for(int i = 0; i < n; i++){
        scanf("%d %s", &r[i].g, r[i].m);
        r[i].o = i;
    }
    qsort(r, n, sizeof(asdf), asdfg);
    for(int i = 0; i < n; i++){
        printf("%d %s\n", r[i].g, r[i].m);
    }
    free(r);
    return 0;
}
