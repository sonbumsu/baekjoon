#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        char b[1001];
        scanf("%s", b);
        int n = strlen(b);
        printf("%c%c\n", b[0], b[n - 1]);
    }
    return 0;
}