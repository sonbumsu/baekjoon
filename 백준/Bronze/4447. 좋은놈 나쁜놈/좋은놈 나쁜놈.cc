#include <stdio.h>
#include <string.h>
int main() {
    int a;
    char asdf[1001];
    scanf("%d", &a);
    getchar();
    for (int i = 1; i <= a; i++) {
        fgets(asdf, sizeof(asdf), stdin);
        int g = 0, b = 0;
        int len = strlen(asdf);
        for (int j = 0; j < len - 1; j++) {
            if (asdf[j] == 'g' || asdf[j] == 'G') g++;
            else if (asdf[j] == 'b' || asdf[j] == 'B') b++;
			printf("%c", asdf[j]);
        }
        printf(" is ");
        if (g > b)
            printf("GOOD\n");
        else if (g < b)
            printf("A BADDY\n");
        else
            printf("NEUTRAL\n");
    }
    return 0;
}