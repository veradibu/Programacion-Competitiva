#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b; 
    cin >> a;
    cin >> b;

    string array_a = a.c_str();
    string array_b = b.c_str();


    for (int i = 0; i < array_a.length(); i++) {
        for (int j = 0; j < array_b.length(); j++) {
            if (tolower(array_a[i]) < tolower(array_b[j])) {
                cout << -1 << endl;
                return 0;
            } else if (tolower(array_a[i]) > tolower(array_b[j])) {
                cout << 1 << endl;
                return 0;
            } else {
                continue;
            }
        } 
    }
    cout << 0 << endl;
}