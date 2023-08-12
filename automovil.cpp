#include <iostream>
#include <string>

// Clase base Vehiculo
class Vehiculo {
protected:
    std::string marca;
    std::string modelo; 
public:
 // Constructor de la clase Vehiculo
    Vehiculo(const std::string& marca, const std::string& modelo)
        : marca(marca), modelo(modelo) {}

    // Método virtual para obtener una descripción del vehículo
    virtual void mostrarInfo() const {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << std::endl;
    }
};
// Subclase Auto
class Coche : public Vehiculo {
private:
    int puertas;

public:
     // Constructor de la clase Auto
    Coche(const std::string& marca, const std::string& modelo, int puertas)
        : Vehiculo(marca, modelo), puertas(puertas) {}
 // Implementación del método describir para Auto
    void mostrarInfo() const override {
        std::cout << "Coche - Marca: " << marca << ", Modelo: " << modelo << ", Puertas: " << puertas << std::endl;
    }
};
// Subclase Moto
class Moto : public Vehiculo {
private:
    int cilindrada;

public:
// Constructor de la clase Moto
    Moto(const std::string& marca, const std::string& modelo, int cilindrada)
        : Vehiculo(marca, modelo), cilindrada(cilindrada) {}
 // Implementación del método describir para Moto
    void mostrarInfo() const override {
        std::cout << "Moto - Marca: " << marca << ", Modelo: " << modelo << ", Cilindrada: " << cilindrada << "cc" << std::endl;
    }
};
// Subclase Camion
class Camion : public Vehiculo {
private:
    float carga;

public:
// Constructor de la clase Camion
    Camion(const std::string& marca, const std::string& modelo, float carga)
        : Vehiculo(marca, modelo), carga(carga) {}
 // Implementación del método describir para Camion
    void mostrarInfo() const override {
        std::cout << "Camion - Marca: " << marca << ", Modelo: " << modelo << ", Carga: " << carga << " toneladas" << std::endl;
    }
};

// Subclase Bicicleta
class Bicicleta : public Vehiculo {
private:
    std::string tipo;

public:
 // Constructor de la clase Bicicleta
    Bicicleta(const std::string& marca, const std::string& modelo, const std::string& tipo)
        : Vehiculo(marca, modelo), tipo(tipo) {}
// Implementación del método describir para Bicicleta
    void mostrarInfo() const override {
        std::cout << "Bicicleta - Marca: " << marca << ", Modelo: " << modelo << ", Tipo: " << tipo << std::endl;
    }
};

int main() {
     // Creamos instancias de cada tipo de vehículo
    Vehiculo vehiculo("Toyota", "Corolla");
    Coche coche("Ford", "Focus", 5);
    Moto moto("Honda", "CBR600RR", 600);
    Camion camion("Volvo", "FH16", 20.5);
    Bicicleta bicicleta("Trek", "X-Caliber", "Montaña");
    // Utilizamos el polimorfismo para describir cada vehículo
    vehiculo.mostrarInfo();  // Marca: Toyota, Modelo: Corolla
    coche.mostrarInfo();     // Coche - Marca: Ford, Modelo: Focus, Puertas: 5
    moto.mostrarInfo();      // Moto - Marca: Honda, Modelo: CBR600RR, Cilindrada: 600cc
    camion.mostrarInfo();    // Camion - Marca: Volvo, Modelo: FH16, Carga: 20.5 toneladas
    bicicleta.mostrarInfo(); // Bicicleta - Marca: Trek, Modelo: X-Caliber, Tipo: Montaña

    return 0;
}