#include "Employee.h"

Employee::Employee(std::string surname, int wiek, int experience, int salary){
    this->surname=surname;
    this->wiek=wiek;
    this->experience=experience;
    this->salary=salary;
    std::cout<<"Konstruktor parametrowy"<<std::endl;
}

Employee::Employee(){
    std::cout<<"Konstruktor bezparametrowy"<<std::endl;
}

Employee::~Employee(){
    std::cout<<"Destruktor klasy Employee"<<std::endl;
}

void Employee::show(){
    std::cout<<"Nazwisko: "<<surname<<std::endl;
    std::cout<<"Wiek: "<<wiek<<std::endl;
    std::cout<<"Doswiadczenie: "<<experience<<std::endl;
    std::cout<<"Wyplata: "<<salary<<std::endl;
}

int Employee::ageEmployment(){
    return wiek-experience;
}

std::string Employee::getSurname(){
    return surname;
}

int Employee::getWiek(){
    return wiek;
}

int Employee::getExperience(){
    return experience;
}

int Employee::getSalary(){
    return salary;
}