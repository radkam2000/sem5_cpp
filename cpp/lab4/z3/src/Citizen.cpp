#include "Citizen.h"

Citizen::Citizen(){
    std::cout<<"Konstruktor bezparametrowy"<<std::endl;
}

Citizen::Citizen(std::string name, std::string surname, int age, char sex, std::string postal_code){
    this->name=name;
    this->surname=surname;
    this->age=age;
    this->sex=sex;
    this->postal_code=postal_code;
}

void Citizen::show(){
    std::cout<<"Imie: "<<name<<std::endl;
    std::cout<<"Nazwisko: "<<surname<<std::endl;
    std::cout<<"Wiek: "<<age<<std::endl;
    std::cout<<"Plec: "<<sex<<std::endl;
    std::cout<<"Kod pocztowy: "<<postal_code<<std::endl;
}

std::string Citizen::getName(){
    return name;
}

std::string Citizen::getSurname(){
    return surname;
}
int Citizen::getAge(){
    return age;
}

char Citizen::getSex(){
    return sex;
}

std::string Citizen::getPostal_code(){
    return postal_code;
}