#include <stdio.h>

int main() {
    int n;
    char s[100001];
    int coffee_in_hand = 0;
    int awake_count = 0;

    if (scanf("%d", &n) != 1) return 0;
    if (scanf("%s", s) != 1) return 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            awake_count++;
            coffee_in_hand = 2;
        } else {
            if (coffee_in_hand > 0) {
                awake_count++;
                coffee_in_hand--;
            }
        }
    }

    printf("%d\n", awake_count);

    return 0;
}