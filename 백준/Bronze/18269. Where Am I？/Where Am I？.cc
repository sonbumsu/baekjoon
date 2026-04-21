#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    for (int k = 1; k <= N; ++k) {
        set<string> seen;
        bool all_unique = true;

        for (int i = 0; i <= N - k; ++i) {
            string sub = S.substr(i, k);
            if (seen.count(sub)) {
                all_unique = false;
                break;
            }
            seen.insert(sub);
        }

        if (all_unique) {
            cout << k << endl;
            break;
        }
    }

    return 0;
}