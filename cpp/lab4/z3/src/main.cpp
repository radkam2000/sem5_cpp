#include "City.h"
#include "Citizen.h"
#include <algorithm>
#include <ctime>

void showCities(std::vector<City>c);
void the_most(std::vector<City>c,int mode);
void statistic(std::vector<City>c);
void sort_cities(std::vector<City>&c);
void mostPostal(std::vector<City>c);
void leastCitizen(std::vector<City>c);

int rnd_name(){return rand()%12;}
int rnd_surname(){return rand()%10;}
int rnd_years(){return rand()%18;}
int rnd_sex(){return rand()%2;}
int rnd_postals(){return rand()%10;}

int main(){
    srand((unsigned)time(0)); 
    std::vector<City> cities;
    std::string city_names[5]={"Warszawa", "Krakow","Moskwa","Bialystok","Lublin"};
    std::string names[12]={"Jan","Karol","name","name","Wiktoria","name","Piotr","Szymon","Maciek","Ola","Michal","Krystian"};
    std::string surnames[10]={"Rad","Kowalski","Wolski","Curie","Newton","Legovsky","Aniol","Szczenski","Krolewski","Zychowicz"};
    int years[18]={12,67,63,10,6,2,15,26,28,43,37,48,39,8,40,79,85,91};
    char sex[2]={'M','F'};
    std::string postals[10]={"87-645","21-070","32-084","46-300","98-338","98-240","05-300","89-350","05-255","09-470"};
    int rnd;
    for (int i=0; i<5;i++){
        rnd=(rand()%20)+2;
        cities.push_back(City(city_names[i]));
        for (int j=0; j<rnd;j++){
            cities[i].addCitizen(Citizen(names[rnd_name()],surnames[rnd_surname()],years[rnd_years()],sex[rnd_sex()],postals[rnd_postals()]));
        }
    }
    showCities(cities);
    sort_cities(cities);
    showCities(cities);
    statistic(cities);
    the_most(cities,1);
    std::cout<<std::endl;
    the_most(cities,2);
    std::cout<<std::endl;
    cities[0].show_citizens();
    Citizen del=cities[0].getFirstCitizen();
        std::cout<<"--------------------------------------"<<std::endl;
        std::cout<<"USUNIECIE MIESZKANCA"<<std::endl;
        del.show();
        std::cout<<"Z MIASTA "<<std::endl;
        cities[0].show_city();
        std::cout<<"--------------------------------------"<<std::endl;
    cities[0].deleteCitizen(del.getSurname(),del.getAge());
    cities[0].show_citizens();
    return 0;
}

void showCities(std::vector<City>c){
    std::cout<<"Miasta: "<<std::endl;
    for (std::vector<City>::iterator it=c.begin();it!=c.end();it++){
        it->show_city();
        std::cout<<std::endl;
    }
}

void the_most(std::vector<City>c,int mode){
    switch(mode){
        case 1:
            mostPostal(c);
            break;
        case 2:
            leastCitizen(c);
            break;
        default:
            std::cout<<"bledny tryb"<<std::endl;
            break;
    }
}

void statistic(std::vector<City>c){
    for (std::vector<City>::iterator it=c.begin();it!=c.end();it++){
    it->show_city();
    std::cout<<"Liczba mieszkancow: "<<it->city_citizens()<<std::endl;
    std::cout<<"Ilosc kobiet: "<<it->women()<<std::endl;
    std::cout<<"Ilosc mezczyzn: "<<it->city_citizens()-it->women()<<std::endl;
    std::cout<<"Dorosli: "<<it->adults()<<std::endl;
    std::cout<<"Niepelnoletni: "<<it->city_citizens()-it->adults()<<std::endl;
    std::cout<<"Unikalne kody pocztowe: "<<it->postal_codes()<<std::endl;
    std::cout<<std::endl;
}
}

void sort_cities(std::vector<City>&c){
    std::sort(c.begin(),c.end(),[ ](City a, City b){return a.city_citizens()<b.city_citizens();});
}

void mostPostal(std::vector<City>c){
    City max=*std::max_element(c.begin(),c.end(),[](City a, City b){return a.postal_codes()<b.postal_codes();});
    std::cout<<"Najwiecej unikalnych kodow pocztowych"<<std::endl;
    max.show_city();
    max.postal_codes(1);
}

void leastCitizen(std::vector<City>c){
    City max=*std::min_element(c.begin(),c.end(),[](City a, City b){return a.city_citizens()<b.city_citizens();});
    std::cout<<"Najmniej mieszkancow"<<std::endl;
    max.show_city();
    max.city_citizens();
}