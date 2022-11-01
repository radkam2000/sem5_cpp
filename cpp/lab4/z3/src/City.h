#ifndef CITY_H
#define CITY_H
#include <iostream>
#include <vector>
#include "Citizen.h"

class City{
private:
    std::vector<Citizen> citizens;
    std::string city_name;
public:
    City(std::string city_name);
    void addCitizen(Citizen citizen);
    void deleteCitizen(std::string surname,int age);
    void show_citizens();
    void show_city();
    int women();
    int city_citizens();
    int adults();
    int postal_codes(int mode=0);
    Citizen getFirstCitizen();
};
#endif