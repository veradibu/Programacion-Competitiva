#include <bits/stdc++.h>
using namespace std;

int main () {
    int m, n;
    int res;
    cin >> m;
    cin >> n;

    if (n % 2 == 0) {
        res = (n / 2) * m; 
        cout << res << endl;
    } else {
        res = (n / 2) * m + m / 2;
        cout << res << endl;
    }
}