#include <stdio.h>
#include <string.h>
int main() {
    char m[20];
    int d, y, h, min;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *months[] = {"January", "February", "March", "April", "May", "June", 
                            "July", "August", "September", "October", "November", "December"};
    scanf("%s %d, %d %d:%d", m, &d, &y, &h, &min);
    int l = (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0));
    if (l) days[1] = 29;
    long long t = (l ? 366 : 365) * 24 * 60;
    int m_idx = 0;
    for (int i = 0; i < 12; i++) {
        if (strcmp(m, months[i]) == 0) {
            m_idx = i;
            break;
        }
    }
    long long p = 0;
    for (int i = 0; i < m_idx; i++) {
        p += days[i];
    }
    p += (d - 1);
    long long pm = (p * 24 * 60) + (h * 60) + min;
    printf("%.15f\n", (double)pm * 100 / t);
    return 0;
}