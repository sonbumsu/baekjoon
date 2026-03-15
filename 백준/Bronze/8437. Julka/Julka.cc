#include <stdio.h>
#include <string.h>
#define MAX 110
void print_bigint(int* a, int len) {
    int start = 0;
    while (start < len - 1 && a[start] == 0) start++;
    for (int i = start; i < len; i++) printf("%d", a[i]);
    printf("\n");
}

int main() {
    char s_str[MAX], d_str[MAX];
    if (scanf("%s %s", s_str, d_str) < 2) return 0;

    int s_len = strlen(s_str);
    int d_len = strlen(d_str);

    int sum[MAX] = {0};
    int i = s_len - 1, j = d_len - 1, k = MAX - 1;
    int carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int val = carry + (i >= 0 ? s_str[i--] - '0' : 0) + (j >= 0 ? d_str[j--] - '0' : 0);
        sum[k--] = val % 10;
        carry = val / 10;
    }

    int diff[MAX] = {0};
    i = s_len - 1, j = d_len - 1, k = MAX - 1;
    int borrow = 0;
    while (i >= 0) {
        int val = (s_str[i--] - '0') - borrow - (j >= 0 ? d_str[j--] - '0' : 0);
        if (val < 0) {
            val += 10;
            borrow = 1;
        } else borrow = 0;
        diff[k--] = val;
    }

    int klaudia[MAX], natalia[MAX];
    int rem_s = 0, rem_d = 0;
    for (int idx = 0; idx < MAX; idx++) {
        int cur_s = rem_s * 10 + sum[idx];
        klaudia[idx] = cur_s / 2;
        rem_s = cur_s % 2;

        int cur_d = rem_d * 10 + diff[idx];
        natalia[idx] = cur_d / 2;
        rem_d = cur_d % 2;
    }

    print_bigint(klaudia, MAX);
    print_bigint(natalia, MAX);

    return 0;
}