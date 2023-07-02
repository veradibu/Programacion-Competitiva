#include <bits/stdc++.h>
using namespace std; // todas las cosas de la libreria standar las puedo usar.
// se evita: std::string si quiero usar un string. 

int main() {
    int w; 
    cin >> w; // lee un numero por input std y guardala en la variable w.

    if (w % 2 == 0) {
        if (w == 2) {
            cout << "NO" << endl; // end line: imprimir un final de linea. 
        }
        else {
            cout << "YES" << endl; 
        }
    }
    else {
        cout << "NO" << endl;
    }
}