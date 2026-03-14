#include<stdio.h>
#include<stdlib.h>
int asdf(const void *a, const void *b){
    int n = *(int *)a;
    int m = *(int *)b;
    if (n < m)
        return -1;
 
    if (n > m)
        return 1;
    return 0;
}
int main(){
    int a, b, c[4] = { 0, };
    for(int i = 0; i < 4; i++){
        scanf("%d", &c[i]);
    }
    qsort(c, 4, sizeof(int), asdf);
    a = c[0] <= c[1] ? c[0] : c[1];
    b = c[2] <= c[3] ? c[2] : c[3];
    printf("%d", a*b);
    return 0;
}