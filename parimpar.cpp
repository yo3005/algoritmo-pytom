#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Verificar si el número es par o impar utilizando el operador de módulo (%)
    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}
