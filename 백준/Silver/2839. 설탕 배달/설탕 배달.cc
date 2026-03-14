#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if((i * 3) + (j * 5) == a){
                printf("%d", i + j);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}