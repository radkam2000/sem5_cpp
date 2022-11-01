#ifndef DOG_H
#define DOG_H
#include "Animal.h"

class Dog:public Animal{
private:
    std::string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog(std::string breed, int levelOfGuideSkills, int levelOfTrackerSkills,std::string name,int limbNr,bool protectedAnimal);
    Dog(std::string name,int limbNr,bool protectedAnimal);
    Dog();
    void setSkillLevel(int umiejetnosc, int wartosc);
    int getSkillLevel(int umiejetnosc);
    void giveVoice();
    void info();
};


#endif