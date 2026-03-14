#include<stdio.h>
int arr[100000];
int main(){
    int N, S;
    scanf("%d %d", &N, &S);
    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
    int a = arr[0], l = 0, r = 0, b = N + 1;
    while(l <= r && r < N){
        if(a < S) a += arr[++r];
        else{
            b = b < (r - l + 1) ? b : (r - l + 1);
            a -= arr[l++];
        }
    }
    if(b == N + 1) printf("0");
    else printf("%d", b);
    return 0;
}