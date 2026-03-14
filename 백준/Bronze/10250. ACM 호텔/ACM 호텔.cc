#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    while(a--){
        int b, c, d;
        scanf("%d %d %d", &b, &c, &d);
        int e =(d - 1) % b + 1;
        int f =(d - 1) / b + 1;
        printf("%d\n", e * 100 + f);
    }
    return 0;
}
