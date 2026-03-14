#include<stdio.h>
int d[10];
int main(){
    int a, b, c, e = 0;
    scanf("%d %d %d", &a, &b, &c);
    d[a]++;
    d[b]++;
    d[c]++;
    for(int i = 1; i <= 6; i++){
        e += d[i];
        if(d[i] == 3){
            printf("%d", 10000 + (i * 1000));
            break;
        }
        else if(d[i] == 2){
            printf("%d", 1000 + (i * 100));
            break;
        }
        if(e == 3){
            printf("%d", i * 100);
            break;
        }
    }
    
    return 0;
}