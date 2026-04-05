#include <stdio.h>

int main() {
    int num_test_cases;
    
    if (scanf("%d", &num_test_cases) != 1) return 0;

    while (num_test_cases--) {
        long long lt, wt, le, we;
        
        scanf("%lld %lld %lld %lld", &lt, &wt, &le, &we);

        long long area_telecom = lt * wt;
        long long area_eurecom = le * we;

        if (area_telecom > area_eurecom) {
            printf("TelecomParisTech\n");
        } else if (area_eurecom > area_telecom) {
            printf("Eurecom\n");
        } else {
            printf("Tie\n");
        }
    }

    return 0;
}