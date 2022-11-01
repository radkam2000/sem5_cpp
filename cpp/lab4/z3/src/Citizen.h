#ifndef CITIZEN_H
#define CITIZEN_H
#include <iostream>

class Citizen{
private:
    std::string name;
    std::string surname;
    int age;
    char sex;
    std::string postal_code;
public:
    Citizen(std::string name, std::string surname, int age, char sex, std::string postal_code);
    Citizen();

    std::string getName();
    std::string getSurname();
    int getAge();
    char getSex();
    std::string getPostal_code();

    void show();
};
#endif