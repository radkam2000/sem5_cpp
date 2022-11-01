#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal{
private:
    int limbNr;
    std::string name;
    bool protectedAnimal;

public:
    Animal();
    Animal(std::string name, int limbNr, bool protectedAnimal=true);
    void setLimbNr(int limnbNr);
    void setName(std::string name);
    void setProtectedAnimal(bool protectedAnimal);

    int getLimbNr();
    std::string getName();
    bool getProtectedAnimal();

    void giveVoice();
    void info();
};

#endif 