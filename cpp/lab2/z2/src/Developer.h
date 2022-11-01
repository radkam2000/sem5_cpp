#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"

class Developer:public Employee{
public:
    virtual float calculateBonus(int value) override;
    Developer(std::string surname, int wiek, int experience, int salary);
    Developer();
    ~Developer();
};

#endif