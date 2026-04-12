#include <stdio.h>

int main() {
    double d1, d2, d3;
    
    if (scanf("%lf %lf %lf", &d1, &d2, &d3) != 3) return 0;

    double sum_abc = (d1 + d2 + d3) / 2.0;

    double c = sum_abc - d1;
    double b = sum_abc - d2;
    double a = sum_abc - d3;

    if (a > 0 && b > 0 && c > 0) {
        printf("1\n");
        printf("%.1f %.1f %.1f\n", a, b, c);
    } else {
        printf("-1\n");
    }

    return 0;
}