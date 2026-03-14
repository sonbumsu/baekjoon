#include<stdio.h>
int main(){
    int a[100], b[100] = {1, 1, 2, 2, 2, 8};
    for(int i = 0; i < 6; i++) scanf("%d", &a[i]);
    for(int i = 0; i < 6; i++) printf("%d ", b[i] - a[i]);
    return 0;
}