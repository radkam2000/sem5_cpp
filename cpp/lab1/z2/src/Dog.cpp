#include "Dog.h"

Dog::Dog(std::string breed, int levelOfGuideSkills, int levelOfTrackerSkills,std::string name,int limbNr,bool protectedAnimal):Animal(name, limbNr, protectedAnimal){
    this->breed=breed;
    this->levelOfGuideSkills=levelOfGuideSkills;
    this->levelOfTrackerSkills=levelOfTrackerSkills;
    std::cout<<"konstruktor z inicjalizacja wszystkich zmiennych"<<std::endl;
}
Dog::Dog(std::string name,int limbNr,bool protectedAnimal):Animal(name, limbNr, protectedAnimal){
    std::cout<<"konstruktor z inicjalizacja zmiennych klasy Animal"<<std::endl;
}
Dog::Dog(){
    std::cout<<"konstruktor bezargumentowy"<<std::endl;
}
void Dog::setSkillLevel(int umiejetnosc, int wartosc){
    if (umiejetnosc==1) this->levelOfGuideSkills=wartosc;
    if (umiejetnosc==2) this->levelOfTrackerSkills=wartosc;
}

int Dog::getSkillLevel(int umiejetnosc){
    if (umiejetnosc==1) return levelOfGuideSkills;
    if (umiejetnosc==2) return levelOfTrackerSkills;
}

void Dog::giveVoice(){
    std::cout<<"Hau hau hau"<<std::endl;
}

void Dog::info(){
    std::cout<<std::endl;
    std::cout<<"Nazwa: "<<getName()<<std::endl;
    std::cout<<"Liczba konczyn: "<<getLimbNr()<<std::endl;
    std::cout<<"Czy jest pod ochrona: "<<getProtectedAnimal()<<std::endl;
    std::cout<<"Rasa: "<<breed<<std::endl;
    std::cout<<"Poziom umiejętnosci przewodnika: "<<levelOfGuideSkills<<std::endl;
    std::cout<<"Poziom umiejetnosci tropienia: "<<levelOfTrackerSkills<<std::endl;
}