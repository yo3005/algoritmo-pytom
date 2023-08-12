#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese el primer número
    cout << "Ingrese el primer número: ";
    cin >> num1;

    // Solicitar al usuario que ingrese el segundo número
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Realizar la multiplicación de los dos números 
    //ingresados y almacenar el resultado en la variable "resultado"
    int resultado = num1 * num2;

    // Mostrar el resultado de la multiplicación en pantalla
    cout << "El resultado de la multiplicación es: " << resultado << endl;

    return 0;
}
