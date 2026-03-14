#include<stdio.h>
int main(){
    char a[11];
    scanf("%s", a);
    if(a[0] == '5' && a[1] == '5' && a[2] == '5') printf("YES");
    else printf("NO");
    return 0;
}