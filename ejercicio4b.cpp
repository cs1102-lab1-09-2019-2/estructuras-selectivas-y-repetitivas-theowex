#include <iostream>

using namespace std;

int main() {
    char te;
    int monto, asegu;
    do {
        cout << "Tipo de seguro: ";
        cin >> te;
    } while (te != 'A' && te != 'B' && te != 'C' && te != 'D');
    switch (te) {
        case 'A':
            monto = 40;
            do {
                cout << "Cantidad asegurados: ";
                cin >> asegu;
            } while (asegu < 0);
            if (asegu > 8){
                monto = monto + ((asegu - 8) * 7.00);
            }
            break;
        case 'B':
            monto = 30;
            do {
                cout << "Cantidad asegurados: ";
                cin >> asegu;
            } while (asegu < 0);
            if (asegu > 6) {
                monto = monto + ((asegu - 6) * 7.00);
            }
            break;
        case 'C':
            monto = 20;
            do {
                cout << "Cantidad asegurados: ";
                cin >> asegu;
            } while (asegu < 0);
            if (asegu > 4) {
                monto = monto + ((asegu - 4) * 3.00);
            }
            break;
        case 'D':
            monto = 10;
            do {
                cout << "Cantidad asegurados: ";
                cin >> asegu;
            } while (asegu < 0);
            if (asegu > 2) {
                monto = monto + ((asegu - 2) * 3.00);
            }
            break;
    }
    cout << "Monto mensual S/. " << monto << endl;
}

