#include <stdio.h>
#include <string.h>
int main() {
    char c[11];
    char *l[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    long long r = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%s", c);
        for (int j = 0; j < 10; j++) {
            if (strcmp(c, l[j]) == 0) {
                if (i == 0) r += j * 10;
                else if (i == 1) r += j;
                else {
                    for (int k = 0; k < j; k++) r *= 10;
                }
                break;
            }
        }
    }
    printf("%lld\n", r);
    return 0;
}