#include <stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int bulk [N][2];
    for(int i=0; i<N; i++){
        scanf("%d %d", &bulk[i][0], &bulk[i][1]);
    }
    int rank [N];
    for(int i=0; i<N; i++){
        rank[i]=1;
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(j==i)
                continue;
            if(bulk[j][0]>bulk[i][0] && bulk[j][1]>bulk[i][1])
                rank[i]++;
        }
    }
    for(int i=0; i<N; i++){
        printf("%d ", rank[i]);
    }
}
