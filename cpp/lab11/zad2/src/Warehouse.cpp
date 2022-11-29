#include "Warehouse.h"
#include <map>
#include <iostream>
#include <vector>

Warehouse::Warehouse(std::vector<std::string> nazwaTowaru,std::vector<int> iloscTowaru){
    if (nazwaTowaru.size()!=iloscTowaru.size()){
        std::cerr<<"Tablica z nazwami towarów i ich ilością są różnej wielkości"<<std::endl;
        exit(EXIT_FAILURE);
    }
    unsigned int licznik=0;
    while(licznik<iloscTowaru.size()){
        this->towar.insert({nazwaTowaru[licznik],iloscTowaru[licznik]});
        licznik++;
    }
}

Warehouse::~Warehouse(){
    std::cout<<"Destruktor Warehouse"<<std::endl;
}

void Warehouse::show(){
    for (auto i:towar){
        std::cout<<i.first<<": "<<i.second<<std::endl;
    }
}

int Warehouse::getIloscTowaru(std::string nazwaTowaru){
    if(towar.find(nazwaTowaru)!=towar.end()){
        return towar.find(nazwaTowaru)->second;
    } else{
        std::cout<<"Nie odnaleziono towaru"<<std::endl;
    }
}

void Warehouse::setIloscTowaru(std::string nazwaTowaru, int iloscTowaru){
    if(towar.find(nazwaTowaru)!=towar.end()){
        auto it =towar.find(nazwaTowaru);
        it->second=iloscTowaru;
    } else{
        std::cout<<"Nie odnaleziono towaru"<<std::endl;
    }
}