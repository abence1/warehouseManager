#include "../include/driver.h"
#include <iostream>
#include <string>

Driver::Driver(int id, const std::string& name, int annualSalary, int warehouseId, const std::string& licenseType, int vehicleId) : Employee(id, name, annualSalary, warehouseId), licenseType(licenseType), vehicleId(vehicleId) {}

void Driver::work()
{
    std::cout << "Driver " << getName() << " is driving vehicle number " << vehicleId;
}

const std::string& Driver::getLicenseType() const { return licenseType; }

int Driver::getVehicleId() const { return vehicleId; }
