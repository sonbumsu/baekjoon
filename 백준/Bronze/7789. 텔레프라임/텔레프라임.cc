#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    int limit = (int)sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int original, prefix;
    
    if (scanf("%d %d", &original, &prefix) != 2) return 0;
    
    int new_number = prefix * 1000000 + original;
    
    if (is_prime(original) && is_prime(new_number)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}