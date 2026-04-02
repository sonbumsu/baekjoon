#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int *stack = (int *)malloc(sizeof(int) * (n + 1));
    char *result = (char *)malloc(sizeof(char) * (n * 2 + 1));
    
    int top = -1;
    int count = 1;
    int res_idx = 0;
    int possible = 1;

    for (int i = 0; i < n; i++) {
        int target;
        scanf("%d", &target);

        while (count <= target) {
            stack[++top] = count++;
            result[res_idx++] = '+';
        }

        if (stack[top] == target) {
            top--;
            result[res_idx++] = '-';
        } 
        else {
            possible = 0;
        }
    }

    if (possible) {
        for (int i = 0; i < res_idx; i++) {
            printf("%c\n", result[i]);
        }
    } 
    else {
        printf("NO\n");
    }

    free(stack);
    free(result);
    return 0;
}