#include <iostream>
#include <string>
using namespace std;

// Clase base Persona
class Persona {
public:
    // Constructor de la clase Persona
    Persona(string nombre, int edad) : nombre_(nombre), edad_(edad) {}

    // Método virtual para obtener una descripción de la persona
    virtual void describir() const {
        cout << "Nombre: " << nombre_ << ", Edad: " << edad_ << " años" << endl;
    }

    // Destructor virtual para permitir la liberación adecuada de memoria
    virtual ~Persona() {}

protected:
    string nombre_;
    int edad_;
};

// Subclase Adulto
class Adulto : public Persona {
public:
    // Constructor de la clase Adulto
    Adulto(string nombre, int edad, string profesion) : Persona(nombre, edad), profesion_(profesion) {}

    // Implementación del método describir para Adulto
    void describir() const override {
        cout << "Adulto - Nombre: " << nombre_ << ", Edad: " << edad_ << " años, Profesión: " << profesion_ << endl;
    }

private:
    string profesion_;
};

// Subclase Niño
class Niño : public Persona {
public:
    // Constructor de la clase Niño
    Niño(string nombre, int edad, string hobby) : Persona(nombre, edad), hobby_(hobby) {}

    // Implementación del método describir para Niño
    void describir() const override {
        cout << "Niño - Nombre: " << nombre_ << ", Edad: " << edad_ << " años, Hobby: " << hobby_ << endl;
    }

private:
    string hobby_;
};

int main() {
    // Creamos un arreglo de punteros a la clase base Persona
    Persona* personas[2];

    // Creamos instancias de cada tipo de persona y asignamos a los punteros
    personas[0] = new Adulto("María", 40, "Ingeniera");
    personas[1] = new Niño("Pedro", 8, "Jugar al fútbol");

    // Utilizamos el polimorfismo para describir cada persona
    for (int i = 0; i < 2; i++) {
        personas[i]->describir();
    }

    // Liberamos la memoria asignada a los objetos creados con "new"
    for (int i = 0; i < 2; i++) {
        delete personas[i];
    }

    return 0;
}
