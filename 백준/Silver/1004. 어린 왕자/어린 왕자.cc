#include<stdio.h>
int in(int x, int y, int cx, int cy, int r){
    int d = (x - cx) * (x - cx) + (y - cy) * (y - cy);
    if(d < r * r){
        return 1;
    }
    return 0;
}
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int n;
        scanf("%d", &n);
        int c = 0;
        for(int i = 0; i < n; i++){
            int cx, cy, r;
            scanf("%d %d %d", &cx, &cy, &r);
            int s = in(x1, y1, cx, cy, r);
            int e = in(x2, y2, cx, cy, r);
            if(s != e){
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}