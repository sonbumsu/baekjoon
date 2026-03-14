#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    return (x > y) - (x < y);
}
int main(){
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(sizeof(int) * n);
    if(!a) return 1;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++) printf("%d\n", a[i]);
    free(a);
    return 0;
}
