#include <bits/stdc++.h>
using namespace std; 

int main() {
    long long n, m, a;
    cin >> n;
    cin >> m;
    cin >> a;

    long long count_n = ((n + a - 1) / a);
    long long count_m = ((m + a - 1) / a);

    long long count = count_m * count_n;

    cout << count << endl;
}