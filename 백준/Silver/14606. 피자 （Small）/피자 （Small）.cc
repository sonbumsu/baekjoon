#include <stdio.h>

int main() {
    int N;
    
    // 피자판의 개수 입력
    if (scanf("%d", &N) == 1) {
        // 즐거움의 총합 계산: n(n-1) / 2
        // n=1일 때도 1*0/2 = 0으로 정상 출력됩니다.
        int result = (N * (N - 1)) / 2;
        
        printf("%d\n", result);
    }
    
    return 0;
}