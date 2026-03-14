#include<stdio.h>
int main(){
    int a[1001], b = 0;
    for(int i = 1; b < 1000; i++){
        for(int j = 0; j < i && b < 1000; j++){
            a[b++] = i;
        }
    }
    int c, d, e = 0;
    scanf("%d %d", &c, &d);
    for(int i = c - 1; i < d; i++){
        e += a[i];
    }
    printf("%d\n", e);
    return 0;
}
