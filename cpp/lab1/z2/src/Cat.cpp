#include "Cat.h"

Cat::Cat(std::string name, int limbNr, bool protecedAnimal):Animal(name,limbNr,protectedAnimal){
    std::cout<<"konstruktor inicjalizujacy pola klasy Animal"<<std::endl;
}

Cat::Cat(){
    std::cout<<"konstruktor bezparametrowy"<<std::endl;
}

void Cat::initMice(int rok1, int rok2, int rok3, int rok4, int rok5){
    this->mice[0]=rok1;
    this->mice[1]=rok2;
    this->mice[2]=rok3;
    this->mice[3]=rok4;
    this->mice[4]=rok5;
}

void Cat::initCat(std::string name, int limbNr, bool protecedAnimal,int levelOfMouseHunting,int rok1, int rok2, int rok3, int rok4, int rok5):Animal(name,limbNr,protecedAnimal){

}