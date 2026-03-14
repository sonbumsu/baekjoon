#include<stdio.h>
int main(){
    int n, m;
    int dq[51], ts[51];
    int s, a = 0;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++) scanf("%d", &ts[i]);
    s = n;
    for(int i = 0; i < n; i++) dq[i] = i + 1;
    for(int i = 0; i < m; i++){
        int t = ts[i], ti = 0;
        for(int j = 0; j < s; j++){
            if(dq[j] == t){
                ti = j;
                break;
            }
        }
        if(ti <= s / 2){
            a += ti;
            for(int j = 0; j < ti; j++){
                int temp = dq[0];
                for(int k = 0; k < s - 1; k++) dq[k] = dq[k + 1];
                dq[s - 1] = temp;
            }
        } 
        else{
            int mo = s - ti;
            a += mo;
            for(int j = 0; j < mo; j++){
                int temp = dq[s - 1];
                for(int k = s - 1; k > 0; k--) dq[k] = dq[k - 1];
                dq[0] = temp;
            }
        }
        for(int j = 0; j < s - 1; j++) dq[j] = dq[j + 1];
        s--;
    }
    printf("%d\n", a);
    return 0;
}