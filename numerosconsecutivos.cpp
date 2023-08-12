#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;

    // Solicitar al usuario que ingrese los tres números separados por comas o espacios
    cout << "Ingrese los tres números separados por comas o espacios (ejemplo: 1, 2, 3): ";

    // Leer los tres números de entrada usando el operador de extracción de cin (>>)
    // El operador ignore se usa para omitir caracteres no numéricos en caso de que el usuario ingrese algo diferente
    if (!(cin >> numero1)) {
        cout << "Error: Entrada no válida." << endl;
        return 1;
    }
    cin.ignore(); // Ignorar el caracter ',' o espacio después del primer número

    if (!(cin >> numero2)) {
        cout << "Error: Entrada no válida." << endl;
        return 1;
    }
    cin.ignore(); // Ignorar el caracter ',' o espacio después del segundo número

    if (!(cin >> numero3)) {
        cout << "Error: Entrada no válida." << endl;
        return 1;
    }

    // Verificar si los tres números son consecutivos
    if (numero1 == numero2 - 1 && numero2 == numero3 - 1) {
        cout << "¡Gracias!" << endl;
    } else {
        cout << "Los números ingresados no son consecutivos." << endl;
    }

    return 0;
}
