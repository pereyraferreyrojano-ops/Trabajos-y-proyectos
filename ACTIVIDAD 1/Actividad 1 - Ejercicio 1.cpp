#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 3 == 0) {
        cout << "El numero es multiplo de 3" << endl;
    } else {
        cout << "El numero NO es multiplo de 3" << endl;
    }

    return 0;
}