#include<stdio.h> 
int main(){ 
    long long int n; 
    scanf("%lld", &n);
    if(n % 7 == 1 || n % 7 == 3) printf("CY"); 
    else printf("SK"); 
}