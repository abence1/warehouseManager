#include <iostream>
#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
private: 
    int id;
    std::string name;
    int annualSalary;
    int warehouseId;
public:
    Employee(int id, std::string& name, int annualSalary, int warehouseId);
    virtual ~Employee() = default;
    
    int getId() const;
    std::string getName() const;
    int getWarehouse() const;
    virtual void work() = 0;
};

#endif
