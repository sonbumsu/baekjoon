#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a % 2024 == 0 && a <= 100000) printf("Yes");
    else printf("No");
    return 0;
}