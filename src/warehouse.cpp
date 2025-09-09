#include "../include/warehouse.h"

Warehouse::Warehouse(int id, const std::string& name, const std::string& address, int capacity, const std::unordered_map<std::string, int>& stock) : id(id), name(name), address(address), capacity(capacity), stock(stock) {};

int Warehouse::getId() const { return id; }

const std::string& Warehouse::getName() const { return name; }

const std::string& Warehouse::getAddress() const { return address; }

int Warehouse::getCapacity() const { return capacity; }

int Warehouse::getItemCount(std::string& itemName) const {
    auto item = stock.find(itemName);
    if (item == stock.end()) return 0;
    else return item->second;
}

const std::unordered_map<std::string, int>& Warehouse::getStock() const { return stock; }
