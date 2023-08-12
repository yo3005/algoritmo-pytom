#include <iostream>
using namespace std;

int main() {
    double base, altura;

    // Solicitar al usuario que ingrese la longitud de la base del triángulo
    cout << "Ingrese la longitud de la base del triángulo: ";
    cin >> base;

    // Solicitar al usuario que ingrese la altura del triángulo
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    // Calcular el área del triángulo utilizando la fórmula: área = (base * altura) / 2
    double area = (base * altura) / 2;

    // Mostrar el resultado del área en pantalla
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
