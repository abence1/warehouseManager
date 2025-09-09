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
    Driver(int id, const std::string& name, int annualSalary, int warehouseId, const std::string& licenseType, int vehicleId);
    ~Driver() override = default;
    void work() override;

    const std::string& getLicenseType() const;
    int getVehicleId() const;
};

#endif // !DRIVER_H
