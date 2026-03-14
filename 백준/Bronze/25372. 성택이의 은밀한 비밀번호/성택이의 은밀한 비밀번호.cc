#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        char b[21];
        scanf("%s", b);
        if(strlen(b) >= 6 && strlen(b) <= 9) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}