#include<stdio.h>
int main(){
    int sit[10][20] = { 0, };
    int n;
    scanf("%d", &n);
    while (n--) {
        char tmp;
        int cus;
        scanf(" %c%d", &tmp, &cus);
        sit[tmp - 'A'][cus - 1] = 1;
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            if (sit[i][j] == 1)
                printf("o");
            else
                printf(".");
        }
        printf("\n");
    }
    return 0;
}
