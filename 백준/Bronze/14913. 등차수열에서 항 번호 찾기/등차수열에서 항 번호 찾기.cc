#include <stdio.h>

int main() {
    int a, d, k;
    
    if (scanf("%d %d %d", &a, &d, &k) != 3) return 0;
    
    int diff = k - a;
    
    if (diff % d == 0) {
        int n = (diff / d) + 1;
        
        if (n >= 1) printf("%d\n", n);
        else printf("X\n");
    } 
    else printf("X\n");

    return 0;
}