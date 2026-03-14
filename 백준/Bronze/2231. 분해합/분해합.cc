#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 1; i < a; i++){
        int b = i, c = i;
        while(b != 0){
            c += b % 10;
            b /= 10;
        }
        if(c == a){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
