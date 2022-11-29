#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "Shop.h"

Shop::Shop(std::string name){
    this->name=name;
}

Shop::~Shop(){
    std::cout<<"Destruktor sklep "<<name<<std::endl;
}

void Shop::sell(std::string nazwaTowaru,int iloscTowaru){
    for(auto i:warehouses){
        if(i->getIloscTowaru(nazwaTowaru)>=iloscTowaru){
            i->setIloscTowaru(nazwaTowaru,i->getIloscTowaru(nazwaTowaru)-iloscTowaru);
            std::cout<<"Sprzedano "<<iloscTowaru<<" "<<nazwaTowaru<<" z magazynu: "<<i<<std::endl;
            return;
        }
    }
}

void Shop::showWarehouses(){
    for (auto i: warehouses){
        std::cout<<i<<std::endl;
    }
}

void Shop::showName(){
    std::cout<<name<<std::endl;
}

void Shop::addWarehouse(std::shared_ptr<Warehouse> warehouse){
    warehouses.push_back(warehouse);
}