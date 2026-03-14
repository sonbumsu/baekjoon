#include<stdio.h>
int main(){
    int m, f;
    scanf("%d %d", &m, &f);
    while(m != 0 && f != 0){
        printf("%d\n", m + f);
        scanf("%d %d", &m, &f);
    }
    return 0;
}