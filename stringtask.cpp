#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string s2; 

    for_each(s.begin(), s.end(), [](char& c) {
        c = tolower((unsigned char)c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            cout << "." << c;
        }
    });
}