#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}