#include "Car.h"
#include <iostream>

Car::Car(std::string model, int rok_produkcji,float pojemnosc_silnika){
    this->model=model;
    this->rok_produkcji=rok_produkcji;
    this->pojemnosc_silnika=pojemnosc_silnika;
}

std::string Car::getModel()
{
    return this->model;
}

void Car::setModel(std::string model)
{
    this->model = model;
}

int Car::getRok_produkcji()
{
    return this->rok_produkcji;
}

void Car::setRok_produkcji(int rok_produkcji)
{
    this->rok_produkcji = rok_produkcji;
}

float Car::getPojemnosc_silnika()
{
    return this->pojemnosc_silnika;
}
void Car::setPojemnosc_silnika(float pojemnosc_silnika)
{
    this->pojemnosc_silnika = pojemnosc_silnika;
}
void Car::showInformation(){
    std::cout<<"Model: "<<model<<std::endl;
    std::cout<<"Rok produkcji: "<<rok_produkcji<<std::endl;
    std::cout<<"Pojemnosc silnika: "<<pojemnosc_silnika<<std::endl;
}