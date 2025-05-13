#ifndef GESTIONNOMINA_EMPLEADO_H
#define GESTIONNOMINA_EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    double salarioBase;

public:
    Empleado(const std::string &nombre, double salarioBase);
    virtual ~Empleado() = default;

    virtual double calcularSalario() const = 0;
    virtual void mostrarInformacion() const = 0;
};

#endif
