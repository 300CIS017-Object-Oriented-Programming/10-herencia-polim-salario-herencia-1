#include "DesarrolladorJunior.h"
#include <iostream>

DesarrolladorJunior::DesarrolladorJunior(const std::string &nombre, double salarioBase)
        : Empleado(nombre, salarioBase) {}

double DesarrolladorJunior::calcularSalario() const {
    return salarioBase;
}

void DesarrolladorJunior::mostrarInformacion() const {
    std::cout << "[Desarrollador Junior] " << nombre
              << " - Salario: $" << calcularSalario() << std::endl;
}
