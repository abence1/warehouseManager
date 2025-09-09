#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <iostream>
#include <string>

class Warehouse {
private: 
    int id;
    std::string name;
    std::string address;
    int capacity;
    std::unordered_map<std::string, int> stock;
public:
    Warehouse(int id, const std::string& name, const std::string& address, int capacity, const std::unordered_map<std::string, int>& stock);
    ~Warehouse() = default;
    
    int getId() const;
    const std::string& getName() const;
    const std::string& getAddress() const;
    int getCapacity() const;
    int getItemCount(std::string& itemName) const;
    const std::unordered_map<std::string, int>& getStock() const;
};

#endif // !WAREHOUSE_H

