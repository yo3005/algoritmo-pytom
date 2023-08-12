#include <iostream>
using namespace std;

int main() {
    int numeroMes;

    // Solicitar al usuario que ingrese el número de mes
    cout << "Ingrese el número de mes (1-12): ";
    cin >> numeroMes;

    // Determinar la estación del año utilizando una estructura switch
    switch (numeroMes) {
        case 1:
        case 2:
        case 12:
            cout << "Es invierno." << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Es primavera." << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Es verano." << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Es otoño." << endl;
            break;
        default:
            // Mensaje de error para un número de mes inválido
            cout << "Número de mes inválido. Ingrese un número entre 1 y 12." << endl;
    }

    return 0;
}
