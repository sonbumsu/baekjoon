#include<stdio.h>
int main(){
    int a[8];
    for(int i = 0; i < 8; i++) scanf("%d", &a[i]);
    int b = 1, c = 1;
    for(int i = 0; i < 8; i++){
        if(a[i] != i + 1) b = 0;
        if(a[i] != 8 - i) c = 0;
    }
    if(b) printf("ascending\n");
    else if(c) printf("descending\n");
    else printf("mixed\n");
    return 0;
}
