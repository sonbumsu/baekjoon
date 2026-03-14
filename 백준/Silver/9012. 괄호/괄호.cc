#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char s[51];
        scanf("%s", s);
        int cnt = 0, valid = 1;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == '(') cnt++;
            else cnt--;
            if (cnt < 0) {
                valid = 0;
                break;
            }
        }
        if (cnt != 0) valid = 0;
        printf("%s\n", valid ? "YES" : "NO");
    }
    return 0;
}
