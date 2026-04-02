#include <stdio.h>

int main() {
    int sleep_time, wake_time;
    int duration;

    if (scanf("%d %d", &sleep_time, &wake_time) != 2) return 0;

    if (wake_time > sleep_time) {
        duration = wake_time - sleep_time;
    } else {
        duration = (24 - sleep_time) + wake_time;
    }

    printf("%d\n", duration);

    return 0;
}