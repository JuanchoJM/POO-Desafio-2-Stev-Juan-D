#ifndef REDESTACIONES_H
#define REDESTACIONES_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "estaciongasolina.h"

using namespace std;

class RedEstaciones {
private:
    short int precios[3][3];  // [regiones][tipos de combustible]
    Estacion* estaciones;      // Arreglo dinámico de estaciones
    int numEstaciones;         // Número total de estaciones
    const string tipos_combustible[3] = {"Regular", "Premium", "EcoExtra"}; // Tipos de             combustible

public:
    // Constructor
    RedEstaciones(int numEstaciones);

    // Destructor
    ~RedEstaciones();

    // Método para agregar una estación
    void agregarEstacion(const string& nombreEstacion, short int codident, const string& gerente, const string& region, short int coordenadas);

    // Método para mostrar el número de estaciones
    void mostrarEstaciones() const;

    // Método para generar un número aleatorio
    int generarNumeroAleatorio(int min, int max);
    void mostrarPrecios() const;
    void eliminarEstacion(short int codident);
    Estacion* obtenerEstacion(short int codident); // Declaración del método
};

#endif // REDESTACIONES_H
