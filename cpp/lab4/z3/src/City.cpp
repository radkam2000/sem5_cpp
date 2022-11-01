#include "City.h"
#include "PostalCodes.h"
#include <forward_list>

City::City(std::string city_name){
    this->city_name=city_name;
}

void City::addCitizen(Citizen citizen){
    citizens.push_back(citizen);
}

void City::deleteCitizen(std::string surname,int age){
    for(std::vector<Citizen>::iterator it=citizens.begin();it!=citizens.end();it++){
        if (it->getAge()==age && it->getSurname()==surname) citizens.erase(it);
    }
}

void City::show_citizens(){
    for(std::vector<Citizen>::iterator it=citizens.begin();it!=citizens.end();it++){
        it->show();
        std::cout<<std::endl;
    }
}

void City::show_city(){
    std::cout<<"Nazwa miasta: "<<city_name<<std::endl;
}

int City::women(){
    int women_count=0;
    for(std::vector<Citizen>::iterator it=citizens.begin();it!=citizens.end();it++){
        if (it->getSex() == 'F') women_count++; 
    }    
    return women_count;
}

int City::city_citizens(){
    return citizens.size();
}

int City::adults(){
    int adults_count=0;
    for(std::vector<Citizen>::iterator it=citizens.begin();it!=citizens.end();it++){
        if (it->getAge() >= 18) adults_count++; 
    }      
    return adults_count;
}

int City::postal_codes(int mode){
    std::forward_list<PostalCodes> postal_codes;
    int uniqe=0;
    for(std::vector<Citizen>::iterator it=citizens.begin();it!=citizens.end();it++){
        bool found=false;
        for (std::forward_list<PostalCodes>::iterator it2=postal_codes.begin();it2!=postal_codes.end();it2++){
            if (it2->getPostalCode() == it->getPostal_code()){ 
                it2->incCitizenCount();
                found=true;
            }
        }
        if (!found){
            postal_codes.push_front(PostalCodes(it->getPostal_code()));
            uniqe++;
        } 
    }
    if (mode==1){
        for(std::forward_list<PostalCodes>::iterator it=postal_codes.begin();it!=postal_codes.end();it++){
            std::cout<<"Kod pocztowy: "<<it->getPostalCode()<<" Ilosc mieszkancow: "<<it->getCitizenCount()<<std::endl;
        }
    }
    return uniqe;
}

Citizen City::getFirstCitizen(){
    return citizens[0];
}