#include "Empleado.h"
#include <iostream>

Empleado::Empleado(const std::string &nombre, double salarioBase)
        : nombre(nombre), salarioBase(salarioBase) {}

void Empleado::mostrarInformacion() const {
    std::cout << "Empleado: " << nombre << ", Salario calculado: " << calcularSalario() << std::endl;
}

std::string Empleado::getNombre() const {
    return nombre;
}
