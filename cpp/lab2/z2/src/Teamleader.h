#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "Employee.h"

class Teamleader:public Employee{
    public:
        virtual float calculateBonus(int value) override;
        virtual void show() override;
        Teamleader(std::string surname, int wiek, int experience, int salary);
        Teamleader();
        ~Teamleader();
};

#endif