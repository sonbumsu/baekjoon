#include <stdio.h>

int main() {
    long long a[15];
    for(int i=0;i<15;i++) scanf("%lld",&a[i]);
    long long m=0;
    for(int i=0;i<14;i++) if(a[i]>m) m=a[i];
    long long k = m+1;
    if(a[14] > k) k = a[14];
    printf("%lld\n", k);
    return 0;
}
