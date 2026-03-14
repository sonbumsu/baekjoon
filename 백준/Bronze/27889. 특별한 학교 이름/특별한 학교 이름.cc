#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s", a);
    if(strcmp(a, "NLCS") == 0) printf("North London Collegiate School");
    else if(strcmp(a, "BHA") == 0) printf("Branksome Hall Asia");
    else if(strcmp(a, "KIS") == 0) printf("Korea International School");
    else if(strcmp(a, "SJA") == 0) printf("St. Johnsbury Academy");
    return 0;
}
