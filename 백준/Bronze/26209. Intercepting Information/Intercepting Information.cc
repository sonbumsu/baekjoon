#include<stdio.h>
int main(){
    int a;
    for(int i = 0; i < 8; i++){
        scanf("%d", &a);
        if(a == 9){
            printf("F");
            return 0;
        }
    }
    printf("S");
    return 0;
}