#include<stdio.h>
int factorial(int t) {
    int ans = 1;
    for (int i = t; i > 0; i--) {
        ans *= i;
    }
    return ans;
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int result = factorial(n) / (factorial(k) * factorial(n - k));
    printf("%d", result);
    return 0;
}
