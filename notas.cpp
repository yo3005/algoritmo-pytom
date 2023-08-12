#include <iostream>
#include <ctime>
using namespace std;

// Función para obtener la calificación correspondiente en letras
char obtenerCalificacionLetra(float nota) {
    if (nota >= 18 && nota <= 20) {
        return 'A';
    } else if (nota >= 15 && nota <= 18) {
        return 'B';
    } else if (nota >= 12 && nota <= 15) {
        return 'C';
    } else if (nota >= 9 && nota <= 12) {
        return 'D';
    } else if (nota >= 1 && nota <= 9) {
        return 'E';
    } 
}

int main() {
    const int numAlumnos = 10;
    float notas[numAlumnos];

    // Inicializar la semilla del generador de números aleatorios
    srand(time(0));

    // Generar aleatoriamente las notas de los alumnos
    for (int i = 0; i < numAlumnos; i++) {
        notas[i] = (rand() % 201) / 10.0; // Genera un número entre 0 y 20 con un decimal
    }

    // Mostrar las notas generadas aleatoriamente y las calificaciones correspondientes en letras
    cout << "Notas generadas aleatoriamente y calificaciones de los alumnos:\n";
    for (int i = 0; i < numAlumnos; i++) {
        cout << "Alumno " << i + 1 << ": " << notas[i] << " -> " << obtenerCalificacionLetra(notas[i]) << endl;
    }

    return 0;
}
