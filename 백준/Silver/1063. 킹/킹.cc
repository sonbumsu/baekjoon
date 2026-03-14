#include <stdio.h>
#include <string.h>
int x(char *d) {
    if (strchr(d, 'R')) return 1;
    if (strchr(d, 'L')) return -1;
    return 0;
}
int y(char *d) {
    if (strchr(d, 'T')) return 1;
    if (strchr(d, 'B')) return -1;
    return 0;
}
int asdf(int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}
int main() {
    char k[3], s[3], c[4];
    int n;
    scanf("%s %s %d", k, s, &n);
    int x1 = k[0] - 'A', y1 = k[1] - '1', x2 = s[0] - 'A', y2 = s[1] - '1';
    for (int i = 0; i < n; i++) {
        scanf("%s", c);
        int mx = x(c), my = y(c), nx1 = x1 + mx, ny1 = y1 + my;
        if (!asdf(nx1, ny1)) continue;
        if (nx1 == x2 && ny1 == y2) {
            int nx2 = x2 + mx, ny2 = y2 + my;
            if (!asdf(nx2, ny2)) continue;
            x2 = nx2;
            y2 = ny2;
        }
        x1 = nx1;
        y1 = ny1;
    }
    printf("%c%d\n", x1 + 'A', y1 + 1);
    printf("%c%d", x2 + 'A', y2 + 1);
    return 0;
}
