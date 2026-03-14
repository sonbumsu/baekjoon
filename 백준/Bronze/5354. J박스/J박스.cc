#include <stdio.h>
void J_b(int n){
    for(int i = 0; i < n; i++) printf("#");
    printf("\n");
    for(int i = 0; i < n - 2; i++) {
        printf("#");
        for(int j = 0; j < n - 2; j++) printf("J");
        printf("#\n");
    }
    for(int i = 0; i < n; i++) printf("#");
    printf("\n\n");
}
int main(){
    int n;
    scanf("%d", &n);
    int b[n];
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);
    for(int i = 0; i < n; i++) {
        if (b[i] == 1) printf("#\n\n");
        else J_b(b[i]);
    }
    return 0;
}
