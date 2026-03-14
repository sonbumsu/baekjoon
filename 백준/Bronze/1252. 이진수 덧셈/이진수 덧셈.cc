#include <stdio.h>
#include <string.h>
void r(char* s) {
    int l = strlen(s);
    for (int i = 0; i < l / 2; i++) {
        char t = s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = t;
    }
}
int main() {
    char a[82], b[82], res[85] = {0};
    scanf("%s %s", a, b);
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0, c = 0;
    while (i >= 0 || j >= 0 || c) {
        int s = c;
        if (i >= 0) s += a[i--] - '0';
        if (j >= 0) s += b[j--] - '0';
        res[k++] = (s % 2) + '0';
        c = s / 2;
    }
    r(res);
    int start = 0;
    while (res[start] == '0' && res[start + 1] != '\0') start++;
    printf("%s\n", &res[start]);
    return 0;
}