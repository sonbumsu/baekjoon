#include <stdio.h>
int main() {
    char l[1001];
    int c = 0;
    while (fgets(l, sizeof(l), stdin) != NULL) {
        c++;
    }
    printf("%d\n", c);
    return 0;
}