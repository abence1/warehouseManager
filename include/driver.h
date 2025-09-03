#include <iostream>
#include <string>
#include "employee.h"
#ifndef DRIVER_H
#define DRIVER_H

class Driver : public Employee {
private: 
    std::string licenseType;
    int vehicleId;
public:
    Driver(int id, std::string& name, int annualSalary, int warehouseId, std::string& licenseType, int vehicleId);
    ~Driver() override = default;
    void work() override;

    std::string getLicenseType();
    std::string getVehicleId();
};

#endif // !DRIVER_H
