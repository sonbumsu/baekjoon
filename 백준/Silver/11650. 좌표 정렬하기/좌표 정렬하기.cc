#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int x, y;
} c;
int b(const void *a, const void *b){
    c *p1 = (c*)a;
    c *p2 = (c*)b;
    if(p1 -> x == p2 -> x) return p1 -> y - p2 -> y;
    return p1 -> x - p2 -> x;
}
int main(){
    int n;
    scanf("%d", &n);
    c *a = (c*)malloc(sizeof(c) * n);
    for(int i = 0; i < n; i++) scanf("%d %d", &a[i].x, &a[i].y);
    qsort(a, n, sizeof(c), b);
    for(int i = 0; i < n; i++) printf("%d %d\n", a[i].x, a[i].y);
    free(a);
    return 0;
}
