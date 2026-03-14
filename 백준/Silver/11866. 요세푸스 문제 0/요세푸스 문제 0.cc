#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int *a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) a[i] = i + 1;
    int b = 0, c = n;
    printf("<");
    while(c > 0){
        b = (b + k - 1) % c;
        printf("%d", a[b]);
        for(int j = b; j < c - 1; j++) a[j] = a[j + 1];
        c--;
        if(c > 0) printf(", ");
    }
    printf(">\n");
    free(a);
    return 0;
}