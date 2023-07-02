#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, k, count; 
    cin >> n;
    cin >> k;
    count = 0;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < k; i++) {
        if (array[i] > 0) {
            count++;
        }
    }

    for (int i = k; i < n; i++){
        if (array[i] == array[k-1] && array[i] > 0) {
            count++;
        }
        if (array[i] < array[k] && array[i] > 0) {
            break;
        }
    }

    cout << count << endl;
}