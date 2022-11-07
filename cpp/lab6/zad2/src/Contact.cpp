#include <iostream>
#include "Contact.h"

Contact::Contact(std::string name, std::string surname, int age, int number, std::string address){
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->number = number;
    this->address = address;
}
std::string Contact::getName(){
    return name;
}
std::string Contact::getSurname(){
    return surname;
}
std::string Contact::getAddress(){
    return address;
}
int Contact::getAge(){
    return age;
}
int Contact::getNumber(){
    return number;
}