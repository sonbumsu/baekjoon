#include <stdio.h>
int main() {
    int Sab, Fab;
    if (scanf("%d %d", &Sab, &Fab) != 2) return 0;
    if (Fab < Sab) {
        printf("flight\n");
    } 
    else {
        printf("high speed rail\n");
    }
    return 0;
}