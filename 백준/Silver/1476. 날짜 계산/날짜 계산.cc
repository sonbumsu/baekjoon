#include <stdio.h>

int main() {
    int E, S, M;
    int year = 1;

    if (scanf("%d %d %d", &E, &S, &M) == 3) {
        
        while (1) {
            if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0) {
                printf("%d\n", year);
                break;
            }
            year++;
        }
    }

    return 0;
}