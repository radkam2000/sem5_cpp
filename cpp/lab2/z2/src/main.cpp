#include "Developer.h"
#include "Teamleader.h"

float bonus=1.2;

void whoWorkMoteThan5Years(Employee** tab, int tab_size){
    std::cout<<"Pracownicy z ponad 5 letnim doswiadczeniem"<<std::endl;
    for (int i=0;i<tab_size;i++){
        if(tab[i]->getExperience()>5) std::cout<<tab[i]->getSurname()<<std::endl;
    }
}

void howManyEarnLessThanMeanBonus(Employee** tab, int tab_size){
    float suma=0;
    int ilosc_pracownikow=0;
    for (int i=0;i<tab_size;i++){
        suma+=tab[i]->calculateBonus(bonus);
    }
    float srednia=suma/tab_size;
    std::cout<<suma<<std::endl;
    for (int i=0;i<tab_size;i++){
        if (tab[i]->calculateBonus(bonus)<srednia) ilosc_pracownikow++;
    }

    std::cout<<"Ilosc pracownikow ktora dostala nizsza premie niz srednia "<<ilosc_pracownikow<<std::endl;
}

int main(){
    std::string tab_nazwisko[7]={"Kowalski","Skiper","Szeregowy","Rico","Julian","Moris","Mort"};
    int tab_wiek[7]={20,50,25,63,34,39,46};
    int tab_exp[7]={2,18,4,24,10,14,28};
    int tab_wyplata[7]={2345,4366,2343,7345,2342,3622,5433};



    Employee* tab_e[7];
    int licznik=0;
    while(licznik<5){
        tab_e[licznik] = new Developer(tab_nazwisko[licznik],tab_wiek[licznik],tab_exp[licznik],tab_wyplata[licznik]);
        licznik++;
    }
    while(licznik<7){
        tab_e[licznik] = new Teamleader(tab_nazwisko[licznik],tab_wiek[licznik],tab_exp[licznik],tab_wyplata[licznik]);        
        licznik++;
    }

    std::cout<<"Informacje o pracownikach"<<std::endl;
    for(int i=0;i<7;i++){
        tab_e[i]->show();
        std::cout<<std::endl;
        std::cout<<std::endl;
    }


    std::cout<<std::endl;
    whoWorkMoteThan5Years(tab_e,7);
    howManyEarnLessThanMeanBonus(tab_e,7);

    for(int i=0; i<7; i++) delete tab_e[i];

    return 0;
}