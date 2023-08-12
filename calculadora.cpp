#include <iostream>
using namespace std;

int suma(int num1, int num2) {
    return num1 + num2;
}

int resta(int num1, int num2) {
    return num1 - num2;
}

int multiplicacion(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0;
    }
}

int calculadora(int op, int num1, int num2) {
    switch (op) {
        case 1:
            return suma(num1, num2);
        case 2:
            return resta(num1, num2);
        case 3:
            return multiplicacion(num1, num2);
        case 4:
            return division(num1, num2);
        default:
            cout << "Error: Opción inválida." << endl;
            return 0;
    }
}

int main() {
    int opcion, numero1, numero2;

    cout << "Calculadora Básica" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;

    cout << "Seleccione una opción (1/2/3/4): ";
    cin >> opcion;

    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    int resultado = calculadora(opcion, numero1, numero2);
    cout << "El resultado es: " << resultado << endl;

    return 0;
}
