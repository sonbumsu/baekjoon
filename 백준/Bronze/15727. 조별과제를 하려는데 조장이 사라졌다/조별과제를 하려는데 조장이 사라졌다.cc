#include<stdio.h>
int main(){
    int a, b = 0;
    scanf("%d", &a);
    b += a / 5;
    if(a % 5) b += 1;
    printf("%d", b);
    return 0;
}