#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
class Employee{
private:
    std::string surname;
    int wiek;
    int experience;
    int salary;
public:
    Employee(std::string surname, int wiek, int experience, int salary);
    Employee();
    virtual ~Employee();
    virtual void show();
    virtual float calculateBonus(int value)=0;
    int ageEmployment();

    std::string getSurname();
    int getWiek();
    int getExperience();
    int getSalary();
};

#endif