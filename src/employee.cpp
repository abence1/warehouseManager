#include "../include/employee.h"
#include <iostream>
#include <string>

Employee::Employee(int id, const std::string& name, int annualSalary, int warehouseId) : id(id), name(name), annualSalary(annualSalary), warehouseId(warehouseId) {}

int Employee::getId() const { return id; }

const std::string& Employee::getName() const { return name; }

int Employee::getWarehouse() const { return warehouseId; }
