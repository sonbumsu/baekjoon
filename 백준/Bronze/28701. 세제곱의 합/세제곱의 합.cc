#include<stdio.h>
int main(){
    int a, b = 0, c = 0;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        b += i + 1;
        c += (i + 1) * (i + 1) * (i + 1);
    }
    printf("%d\n%d\n%d", b, b * b, c);
    return 0;
}