#include "BufferArr.h"
#include <memory>
#include <iostream>

BufferArr::BufferArr(int rozmiar){
    this->rozmiar=rozmiar;
    this->tab = std::make_unique<int[]>(rozmiar); 
    std::cout<<"Konstruktor BufferArr"<<std::endl;
}

void BufferArr::add(int a){
    if (freeSpace<rozmiar){
        tab[freeSpace]=a;
        freeSpace++;
    }else{
        std::cout<<"Przekroczono rozmiar bufora, nie dodano liczby"<<std::endl;
    }
}

void BufferArr::write(){
    for(int i=0;i<rozmiar;i++){
        std::cout<<tab[i]<<", ";
    }
    std::cout<<std::endl;
}
BufferArr::~BufferArr(){
    std::cout<<"Destruktor BuffeArr"<<std::endl;
}