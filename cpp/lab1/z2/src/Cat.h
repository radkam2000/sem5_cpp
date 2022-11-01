#ifndef CAT_H
#define CAT_H
#include "Animal.h"

class Cat:public Animal{
private:
    int levelOfMouseHunting=NULL;
    int mice[5];
public:
    Cat(std::string name, int limbNr, bool protecedAnimal);
    Cat();
    void initMice(int rok1, int rok2, int rok3, int rok4, int rok5);
    void initCat(std::string name, int limbNr, bool protecedAnimal,int levelOfMouseHunting,int rok1, int rok2, int rok3, int rok4, int rok5);
    void setLevelOfMouseHunting(int poziom);
    int getLevelOfMouseHunting();
    int getMice(int rol);
    void getVoice();
    void info();
};

#endif