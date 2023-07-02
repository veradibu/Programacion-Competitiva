#include <bits/stdc++.h>
using namespace std;

int main() {
    // [filas][columnas]
    int matrix[5][5];
    int count = 0;
    int restante = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];        
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                if (i == 2 && j == 2) {
                    break;
                }
                if (i < 2) {
                    restante = 2 - i;
                    count = count + restante;
                }
                if (i > 2) {
                    restante = i - 2;
                    count = count + restante;
                }
                if (j < 2) {
                    restante = 2 - j;
                    count = count + restante;
                }
                if (j > 2) {
                    restante = j - 2;
                    count = count + restante;

                }
            break;
            }  
                  
        }
    }
    cout << count << endl;

}
