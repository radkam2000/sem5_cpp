#include "Animal.h"

    Animal::Animal(std::string name, int limbNr, bool protectedAnimal){
        this->name=name;
        this->limbNr=limbNr;
        this->protectedAnimal=protectedAnimal;
    }

    Animal::Animal(){
        std::cout<<"Konstruktor bazowy pusty"<<std::endl;
    }

    void Animal::setLimbNr(int limnbNr){
        this->limbNr=limbNr;
    }

    void Animal::setName(std::string name){
        this->name=name;
    }
    void Animal::setProtectedAnimal(bool protectedAnimal){
        this->protectedAnimal=protectedAnimal;
    }

    int Animal::getLimbNr(){
        return limbNr;
    }
    std::string Animal::getName(){
        return name;
    }
    bool Animal::getProtectedAnimal(){
        return protectedAnimal;
    }

    void Animal::giveVoice(){
        std::cout<<"Chrum, miau, hau, piiiii"<<std::endl;
    }
    void Animal::info(){
        std::cout<<std::endl;
        std::cout<<"Nazwa: "<<name<<std::endl;
        std::cout<<"Liczba konczyn: "<<limbNr<<std::endl;
        std::cout<<"Czy jest pod ochrona: "<<protectedAnimal<<std::endl;
    }