#include<stdio.h>
int main(){
    int A, B, N, adsf = 0;
    scanf("%d %d %d", &A, &B, &N);
    int r = A % B;
    for(int i = 0; i < N; i++){
        r *= 10;
        adsf = r / B;
        r %= B;
    }
    printf("%d\n", adsf);
    return 0;
}
