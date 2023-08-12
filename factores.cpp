#include <iostream>
using namespace std;

int main() {
    int factor1, factor2;

    // Solicitar al usuario que ingrese el primer factor
    cout << "Ingrese el primer factor: ";
    cin >> factor1;

    // Solicitar al usuario que ingrese el segundo factor
    cout << "Ingrese el segundo factor: ";
    cin >> factor2;

    // Realizar la suma de los dos factores
    //ingresados y almacenar el resultado en la variable "suma"
    int suma = factor1 + factor2;

    // Mostrar el resultado de la suma en pantalla
    cout << "La suma de los dos factores es: " << suma << endl;

    return 0;
}
