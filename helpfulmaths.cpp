#include <bits/stdc++.h>
using namespace std;

int main () {
    string suma;
    cin >> suma; 

    sort(begin(suma), end(suma));
    for (int i = suma.length()/2; i < suma.length(); i++) {
        cout << suma[i];
        if (i != suma.length() - 1) {
            cout << "+";
        }
    } 
    return 0;
}
