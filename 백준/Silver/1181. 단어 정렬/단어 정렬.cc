#include<stdio.h>
#include<string.h>
int cmp(char* a, char* b){
    int la = strlen(a), lb = strlen(b);
    if (la > lb) return 1;
    else if (la < lb) return -1;
    else return strcmp(a, b);
}
int main(){
    int n;
    char a[20000][51], t[51];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%s", a[i]);
    for (int i = 1; i < n; i++){
        strcpy(t, a[i]);
        int j = i - 1;
        while (j >= 0 && cmp(a[j], t) > 0){
            strcpy(a[j + 1], a[j]);
            j--;
        }
        strcpy(a[j + 1], t);
    }

    for (int i = 0; i < n; i++){
        if(i == 0 || strcmp(a[i], a[i - 1]) != 0) printf("%s\n", a[i]);
    }
    return 0;
}