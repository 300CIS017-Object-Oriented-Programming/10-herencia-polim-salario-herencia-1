#include "DesarrolladorSenior.h"
#include <iostream>

DesarrolladorSenior::DesarrolladorSenior(const std::string &nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double DesarrolladorSenior::calcularSalario() const {
    return salarioBase * 1.20;
}

void DesarrolladorSenior::mostrarInformacion() const {
    std::cout << "Desarrollador Senior: " << nombre
              << " - Salario: " << calcularSalario() << std::endl;
}
