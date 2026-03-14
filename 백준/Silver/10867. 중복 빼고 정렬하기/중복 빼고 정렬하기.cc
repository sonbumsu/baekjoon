#include<stdio.h>
int main(){
    int n, x, arr[2001] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        arr[x + 1000] = 1;
    }
    for(int i = 0; i <= 2000; i++){
        if(arr[i]) printf("%d ", i - 1000);
    }
    printf("\n");
    return 0;
}
