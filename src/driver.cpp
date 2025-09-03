#include "../include/driver.h"
#include <iostream>
#include <string>

Driver::Driver(int id, std::string& name, int annualSalary, int warehouseId, std::string& licenseType, int vehicleId) : Employee(id, name, annualSalary, warehouseId), licenseType(licenseType), vehicleId(vehicleId) {}

void Driver::work()
{
    std::cout << "Driver " << getName() << " is driving vehicle number " << vehicleId;
}
