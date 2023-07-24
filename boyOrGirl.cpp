#include <bits/stdc++.h>
using namespace std;

int main () {
    string user; 
    cin >> user;
    int count = 0;
    
    sort(user.begin(), user.end());
    for(int i=1; i<user.length(); i++) {
        if(user[i] != user[i-1]) {
            count++;
        }
    }
    if (count%2 == 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
}