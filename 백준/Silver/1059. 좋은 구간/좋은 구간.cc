#include<stdio.h>
int main(){
    int L, S[1001], n, temp;
    scanf("%d", &L);
    for(int i = 0; i < L; i++) scanf("%d", &S[i]);
    scanf("%d", &n);
    for(int i = 0; i < L; i++){
        for(int j = 0; j < L; j++){
            if(S[j] > S[j + 1]){
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i <= L; i++){
        if(S[i] == n){
            printf("0");
            break;
        }
        if(S[i] > n){
            printf("%d", (S[i] - n) * (n - S[i - 1]) - 1);
            break;
        }
    }
    return 0;
}