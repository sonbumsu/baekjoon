#include<stdio.h>
int main(){
    int a, t;
    scanf("%d\n%d", &a, &t);
    int p = 10 + 2 * (25 - a + t);
    if(p < 0) p = 0;
    printf("%d", p);
    return 0;
}