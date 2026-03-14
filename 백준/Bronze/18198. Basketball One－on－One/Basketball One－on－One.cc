#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i += 2) {
        char p = s[i];
        int pts = s[i + 1] - '0';
        if (p == 'A') a += pts;
        else b += pts;

        if ((a >= 11 || b >= 11) && abs(a - b) >= 2 && (a >= 10 && b >= 10)) {
            cout << (a > b ? 'A' : 'B');
            return 0;
        }
        if ((a >= 11 || b >= 11) && (a >= 11 && a - b >= 1 || b >= 11 && b - a >= 1) && (a < 10 || b < 10)) {
            cout << (a > b ? 'A' : 'B');
            return 0;
        }
    }
}
