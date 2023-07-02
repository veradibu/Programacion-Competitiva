#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s; 
        cin >> s;

        int length = s.length();

        // devuelvo la palabra como esta.
        if (length <= 10) {
            cout << s << endl;
        }
        else {
            cout << s[0] << length -2 << s[length - 1] << endl;
        }
    }
}