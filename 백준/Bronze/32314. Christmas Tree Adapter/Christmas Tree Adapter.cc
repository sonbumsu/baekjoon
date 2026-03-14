#include <stdio.h>
int main() {
    int tree_a;
    int watt, volt;
    if (scanf("%d", &tree_a) != 1) return 0;
    if (scanf("%d %d", &watt, &volt) != 2) return 0;
    int adapter_a = watt / volt;
    if (adapter_a >= tree_a) {
        printf("1\n");
    } else {
        printf("0\n");
    }    
    return 0;
}