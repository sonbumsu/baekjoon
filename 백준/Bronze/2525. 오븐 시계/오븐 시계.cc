#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    b += c;
    for(int i = 0; i < 17; i++){
        if(b >= 60){
           a += 1;
           b -= 60;
        }
        if(a >= 24){
            a -= 24;
        }
    }
        printf("%d %d", a, b);
        return 0;
}