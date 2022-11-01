#include "Teamleader.h"

Teamleader::Teamleader(std::string surname, int wiek, int experience, int salary):Employee(surname, wiek, experience, salary){
    std::cout<<"Konstruktor parametrowy klasy Teamleader"<<std::endl;
}

Teamleader::Teamleader(){
    std::cout<<"Konstruktor bezparametrowy klasy Teamleader"<<std::endl;
}

float Teamleader::calculateBonus(int value){
    return value*(1+getSalary()+getExperience());
}

void Teamleader::show(){
    std::cout<<"Nazwisko: "<<getSurname()<<std::endl;
    std::cout<<"Wiek: "<<getWiek()<<std::endl;
    std::cout<<"Doswiadczenie: "<<getExperience()<<std::endl;
    std::cout<<"Wyplata: "<<getSalary()<<std::endl;
    std::cout<<"Jestem Team Leader z "<<getExperience()<<" letnim doświadczeniem"<<std::endl;
}

Teamleader::~Teamleader(){
    std::cout<<"Destruktor klasy Teamleader"<<std::endl;
}