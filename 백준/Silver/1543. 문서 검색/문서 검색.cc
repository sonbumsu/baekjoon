#include<stdio.h>
#include<string.h>
char a[10005], b[10005];
void asdf(){
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
}
void asdfasdf(){
    int n = strlen(a), m = strlen(b), cnt = 0;
    if(n < m){
        printf("0\n");
        return;
    }
    for(int i = 0; i <= n - m; i++){
        int f = 1;
        for(int j = 0; j < m; j++){
            if(a[i + j] != b[j]){
                f = 0;
                break;
            }
        }
        if(f){
            cnt++;
            i += m - 1;
        }
    }
    printf("%d\n", cnt);
}
int main(){
    asdf();
    asdfasdf();
    return 0;
}
