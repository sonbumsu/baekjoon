#include <stdio.h>
#include <stdbool.h>

int main() {
    int Q;
    if (scanf("%d", &Q) != 1) return 0;

    int current_problems = 0;
    bool is_dissolved = false;

    for (int i = 0; i < Q; i++) {
        int type, count;
        scanf("%d %d", &type, &count);

        if (is_dissolved) continue;

        if (type == 1) {
            current_problems += count;
        } else if (type == 2) {
            if (current_problems < count) {
                is_dissolved = true;
            } else {
                current_problems -= count;
            }
        }
    }

    if (is_dissolved) {
        printf("Adios\n");
    } else {
        printf("See you next month\n");
    }

    return 0;
}