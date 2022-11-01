#include "Developer.h"

Developer::Developer(std::string surname, int wiek, int experience, int salary):Employee(surname, wiek, experience, salary){
    std::cout<<"Konstruktor klasy Developer"<<std::endl;
}

Developer::Developer(){
    std::cout<<"Konstrukot bezparametrowy klasy developer"<<std::endl;
}

float Developer::calculateBonus(int value){
    return value+0.2*value*(getSalary()+getExperience());
}

Developer::~Developer(){
    std::cout<<"Destruktor klasy Developer"<<std::endl;
}
