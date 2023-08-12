#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Verificar si el número es positivo
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    }
    // Si no es positivo, verificar si es negativo
    else if (numero < 0) {
        cout << "El número es negativo." << endl;
    }
    // Si no es positivo ni negativo, entonces es cero
    else {
        cout << "El número es cero." << endl;
    }

    return 0;
}