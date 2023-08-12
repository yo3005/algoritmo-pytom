#include <iostream>
#include <string>
using namespace std;

// Clase base Vehiculo
class Vehiculo {
public:
    // Constructor de la clase Vehiculo
    Vehiculo(string marca, string modelo) : marca_(marca), modelo_(modelo) {}

    // Método virtual para obtener una descripción del vehículo
    virtual void describir() const {
        cout << "Vehiculo: Marca - " << marca_ << ", Modelo - " << modelo_ << endl;
    }

protected:
    string marca_;
    string modelo_;
};

// Subclase Auto
class Auto : public Vehiculo {
public:
    // Constructor de la clase Auto
    Auto(string marca, string modelo, int puertas) : Vehiculo(marca, modelo), puertas_(puertas) {}

    // Implementación del método describir para Auto
    void describir() const override {
        cout << "Auto: Marca - " << marca_ << ", Modelo - " << modelo_ << ", Puertas - " << puertas_ << endl;
    }

private:
    int puertas_;
};

// Subclase Moto
class Moto : public Vehiculo {
public:
    // Constructor de la clase Moto
    Moto(string marca, string modelo, string tipo) : Vehiculo(marca, modelo), tipo_(tipo) {}

    // Implementación del método describir para Moto
    void describir() const override {
        cout << "Moto: Marca - " << marca_ << ", Modelo - " << modelo_ << ", Tipo - " << tipo_ << endl;
    }

private:
    string tipo_;
};

// Subclase Camion
class Camion : public Vehiculo {
public:
    // Constructor de la clase Camion
    Camion(string marca, string modelo, int capacidadCarga) : Vehiculo(marca, modelo), capacidadCarga_(capacidadCarga) {}

    // Implementación del método describir para Camion
    void describir() const override {
        cout << "Camion: Marca - " << marca_ << ", Modelo - " << modelo_ << ", Capacidad de carga - " << capacidadCarga_ << " kg" << endl;
    }

private:
    int capacidadCarga_;
};

// Subclase Bicicleta
class Bicicleta : public Vehiculo {
public:
    // Constructor de la clase Bicicleta
    Bicicleta(string marca, string modelo, string tipo) : Vehiculo(marca, modelo), tipo_(tipo) {}

    // Implementación del método describir para Bicicleta
    void describir() const override {
        cout << "Bicicleta: Marca - " << marca_ << ", Modelo - " << modelo_ << ", Tipo - " << tipo_ << endl;
    }

private:
    string tipo_;
};

int main() {
    // Creamos instancias de cada tipo de vehículo
    Vehiculo vehiculo("Ford", "Focus");
    Auto auto1("Toyota", "Corolla", 4);
    Moto moto1("Honda", "CBR650R", "Deportiva");
    Camion camion1("Volvo", "VNL 860", 25000);
    Bicicleta bicicleta1("Trek", "FX 2", "Montaña");

    // Utilizamos el polimorfismo para describir cada vehículo
    vehiculo.describir();
    auto1.describir();
    moto1.describir();
    camion1.describir();
    bicicleta1.describir();

    return 0;
}
