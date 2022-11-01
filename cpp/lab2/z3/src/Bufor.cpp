#include "Bufor.h"
#include <iostream>

Bufor::Bufor(){
    this->tab_size=10;
    this->tab=new int[tab_size];
    this->first_free=0;
    std::cout<<"Konstruktor bezparametrowy klasy bufor"<<std::endl;
}

Bufor::Bufor(int tab_size){
    this->tab_size=tab_size;
    this->tab=new int[tab_size];
    this->first_free=0;
    std::cout<<"konstruktor parametrowy klasy bufor"<<std::endl;
}

Bufor::~Bufor(){
    delete tab;
}

void Bufor::add(int value){
    if (first_free<tab_size){
        tab[first_free]=value;
        first_free++;
    }
    else{
        std::cout<<"Nie mozna dodac, brak miejsca w tablicy"<<std::endl;
    }
}

int Bufor::getIndex(){
    
}

int Bufor::getSize(){

}

int Bufor::getTab(int i){

}

int Bufor::getFirst(){

}

void Bufor::setFirst(int value){

}

void Bufor::setTab(int pos, int value){

}

void Bufor::show(){

}