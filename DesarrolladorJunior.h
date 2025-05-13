#ifndef GESTIONNOMINA_DESARROLLADORJUNIOR_H
#define GESTIONNOMINA_DESARROLLADORJUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(const std::string &nombre, double salarioBase);
    ~DesarrolladorJunior() override = default;

    double calcularSalario() const override;
    void mostrarInformacion() const override;
};

#endif
