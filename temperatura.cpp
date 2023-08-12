#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Solicitar al usuario que ingrese la temperatura en Celsius
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;

    // Realizar la conversión a Fahrenheit utilizando la fórmula
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Mostrar el resultado en pantalla
    cout << "La temperatura en Fahrenheit es: " << fahrenheit << " °F" << endl;

    return 0;
}
