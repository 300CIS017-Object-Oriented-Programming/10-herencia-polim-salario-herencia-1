#include <iostream>
#include <vector>
#include <memory>

#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"


void inicializarDatos(std::vector<std::unique_ptr<Empleado>>& empleados) {

    empleados.emplace_back(std::make_unique<DesarrolladorJunior>("Juan ", 1200.0));
    empleados.emplace_back(std::make_unique<DesarrolladorJunior>("Ana ", 1350.0));


    empleados.emplace_back(std::make_unique<DesarrolladorSenior>("Luis ", 2000.0));
    empleados.emplace_back(std::make_unique<DesarrolladorSenior>("María", 2250.0));