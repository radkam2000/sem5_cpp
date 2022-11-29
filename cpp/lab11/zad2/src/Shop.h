#ifndef SHOP_H
#define SHOP_H
#include <string>
#include <vector>
#include <memory>
#include "Warehouse.h"

class Shop{
private:
    std::string name;
    std::vector<std::shared_ptr<Warehouse>> warehouses;
public:
    Shop(std::string name);
    void sell(std::string nazwaTowaru,int iloscTowaru);
    void addWarehouse(std::shared_ptr<Warehouse> warehouse);
    void showWarehouses();
    void showName();
    ~Shop(); 
};

#endif