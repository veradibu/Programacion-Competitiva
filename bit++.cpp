#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    int count = 0; 
    cin >> n;
    string array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i]; 
    }

    for (int i = 0; i < n; i++) {
        if (array[i] == "++X" || array[i] == "X++"){
            count = count + 1;
        }
        if (array[i] == "--X" || array[i] == "X--") {
            count = count - 1;
        }
    }
    cout << count << endl;
}
