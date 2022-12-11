#ifndef CAR_H
#define CAR_H
#include <string>

class Car{
private:
    std::string model;
    int rok_produkcji;
    float pojemnosc_silnika;

public:
    Car(std::string model, int rok_produkcji,float pojemnosc_silnika);
    std::string getModel(); 
    void setModel(std::string model);
    int getRok_produkcji();
    void setRok_produkcji(int rok_produkcji);
    float getPojemnosc_silnika();
    void setPojemnosc_silnika(float pojemnosc_silnika);
    void showInformation();
};

#endif