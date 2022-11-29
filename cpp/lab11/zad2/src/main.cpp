#include "Warehouse.h"
#include "Shop.h"
#include <vector>
#include <iostream>

int main(){
    std::vector<std::string> nazwyTowarow={"książki","komputery","łóżka"};
    std::vector<int> iloscTowarow={10,15,20};

    std::shared_ptr<Warehouse> w1 (new Warehouse(nazwyTowarow,iloscTowarow));
    nazwyTowarow.push_back("narzędzia");
    iloscTowarow.push_back(30);
    std::shared_ptr<Warehouse> w2 (new Warehouse(nazwyTowarow,iloscTowarow));

    Shop s1("Cosie");
    Shop s2("Niecosie");

    s1.addWarehouse(w1);
    s2.addWarehouse(w1);

    s1.addWarehouse(w2);
    s2.addWarehouse(w2);

    std::cout<<"Towary w1: "<<std::endl;
    w1->show();
    std::cout<<"Towary w2: "<<std::endl;
    w2->show();
    std::cout<<std::endl;

    std::cout<<"Sklep 1:"<<std::endl;
    s1.showName();
    s1.showWarehouses();
    std::cout<<"Sklep 2:"<<std::endl;
    s2.showName();
    s2.showWarehouses();
    std::cout<<std::endl;

    s1.sell("książki",10);
    std::cout<<std::endl;

    std::cout<<"Sklep 1:"<<std::endl;
    s1.showName();
    s1.showWarehouses();

    std::cout<<"Sklep 2:"<<std::endl;
    s2.showName();
    s2.showWarehouses();
    std::cout<<std::endl;
    
    std::cout<<"Towary w1"<<std::endl;
    w1->show();
    std::cout<<"Towary w2"<<std::endl;
    w2->show();
    std::cout<<std::endl;
    
    s2.sell("książki",2);
    std::cout<<std::endl;

    std::cout<<"Sklep 1:"<<std::endl;
    s1.showName();
    s1.showWarehouses();
    std::cout<<"Sklep 2:"<<std::endl;
    s2.showName();
    s2.showWarehouses();
    std::cout<<std::endl;
    
    std::cout<<"Towary w1"<<std::endl;
    w1->show();
    std::cout<<"Towary w2"<<std::endl;
    w2->show();
    std::cout<<std::endl;
    
    s2.sell("narzędzia",10);
    std::cout<<std::endl;
    
    std::cout<<"Towary w1"<<std::endl;
    w1->show();
    std::cout<<"Towary w2"<<std::endl;
    w2->show();

    return 0;
}