#include<stdio.h>
int main(){
    int a;
    int b[101];
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        scanf("%d", &b[i]);
    }
    int c;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        int d, e;
        scanf("%d %d", &d, &e);
        if(d == 1){
            for(int j = e; j <= a; j += e){
                b[j] = !b[j];
            }
        }
        else if(d == 2){
            b[e] = !b[e];
            for(int j = 0; (e - j >= 1 && e + j <= a); j++){
                if(b[e - j] == b[j + e]){
                    b[e - j] = !b[e - j];
                    b[j + e] = !b[j + e];
                }
                else break;
            }
        }
    }
    for(int i = 1; i <= a; i++){
        printf("%d ", b[i]);
        if(i % 20 == 0) printf("\n");
    }
    return 0;
}