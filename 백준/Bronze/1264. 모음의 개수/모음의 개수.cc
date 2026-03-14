#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    int b;
    while(1) {
        getline(cin, a);
        if(a[0] == '#') return 0;
        b = 0;
        for(int i=0; i<a.length(); i++)
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
               a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') b++;
        printf("%d\n", b);
    }
}