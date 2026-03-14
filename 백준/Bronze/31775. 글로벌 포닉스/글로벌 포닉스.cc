#include<stdio.h>
int main(){
    char a[100];
    int k = 0, l = 0, p = 0;
    for(int i = 0; i < 3; i++){
        scanf("%s", a);
        if(a[0] == 'k') k++;
        if(a[0] == 'l') l++;
        if(a[0] == 'p') p++;
    }
    if(k && l && p) printf("GLOBAL");
    else printf("PONIX");
    return 0;
}