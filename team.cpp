#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count; 
    cin >> n;
    count = 0;

    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;

        if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1)) {
            count = count + 1;
        }
    }
    cout << count << endl;
}