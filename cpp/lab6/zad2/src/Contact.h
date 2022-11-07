#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact{
public:
    std::string name;
    std::string surname;
    int age;
    int number;
    std::string address;
    Contact(std::string name, std::string surname, int age, int number, std::string address);
    std::string getName();
    std::string getSurname();
    std::string getAddress();
    int getAge();
    int getNumber();
};   

#endif