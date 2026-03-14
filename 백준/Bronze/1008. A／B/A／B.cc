#include<stdio.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.32lf", a / b);
    return 0;
}