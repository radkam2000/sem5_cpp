//program kompilowany w standardzie c++17
#include "Car.h"
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<Car> cars;

    cars.push_back(Car("Fabia",2008,1.2));
    cars.push_back(Car("Octavia",2017,2));
    cars.push_back(Car("A3",2020,2.4));
    cars.push_back(Car("A4",1999,1.9));

    std::cout<<"Posortowane rosnąco względem roku produkcji:"<<std::endl;
    std::sort(cars.begin(), cars.end(), [](auto a,auto b){return a.getRok_produkcji()<b.getRok_produkcji();});
    int tmp=1;
    for(auto i : cars){
        std::cout<<tmp<<std::endl;
        i.showInformation();
        tmp++;
    }


    std::cout<<"Posortowane malejąco względem pojemności silnika:"<<std::endl;
    std::sort(cars.begin(), cars.end(), [](auto a,auto b){return a.getPojemnosc_silnika()>b.getPojemnosc_silnika();});
    tmp=1;
    for(auto i : cars){
        std::cout<<tmp<<std::endl;
        i.showInformation();
        tmp++;
    }
}