#include<stdio.h>
#include<math.h>
double d(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(){
    double x1, y1, x2, y2, x3, y3;
    if(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) == EOF) return 0;
    if((y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1)){
    printf("-1.0\n");
    return 0;
    }
    double a = d(x1, y1, x2, y2);
    double b = d(x2, y2, x3, y3);
    double c = d(x3, y3, x1, y1);
    double p[3] = {2 * (a + b), 2 * (b + c), 2 * (c + a)};
    double max = p[0], min = p[0];
    for(int i = 1; i < 3; i++){
        if(p[i] > max) max = p[i];
        if(p[i] < min) min = p[i];
    }
    printf("%.16f\n", max - min);
    return 0;
}