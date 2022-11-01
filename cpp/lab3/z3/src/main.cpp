#include "Array.h"

int main(){
    Array<int> tab;
    Array<std::string> tabS(6);

    tab.addElem(45);
    tab.addElem(2);
    tab.addElem(756);

    tabS.addElem("np");
    tabS.addElem("dlugi");

    tab.show();
    tabS.show();

    tab.sortInc();
    tabS.sortInc();

    tab.show();
    tabS.show();

    std::cout<<tab.getMaxElem()<<std::endl;
    std::cout<<tab.getElem(2)<<std::endl;

    std::cout<<tabS.getMaxElem()<<std::endl;
    std::cout<<tabS.getElem(2)<<std::endl;

    return 0;
}