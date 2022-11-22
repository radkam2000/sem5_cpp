#include <iostream>

int add_number(){
    int number;
    std::cout<<"Podaj liczbe do dodania"<<std::endl;
    std::cin>>number;
    if(std::cin.fail()){
        throw -1;
    }
    else return number;
}

void check_win(int w, int tries){
    if (w>21){
        throw -2;
    }
    else if(w==21){
        std::cout<<"Wygrales w "<<tries<<" probach"<<std::endl;
        exit(EXIT_SUCCESS);
    }
}

int main(){
    int tries=0;
    int wynik=0;
    int liczba;
    while(true){
        try{
            tries++;
            liczba=add_number();
            wynik+=liczba;
            check_win(wynik,tries);
        }
        catch(int e){
            if (e==-1){
                std::cout<<"Nie podales poprawnej liczby, podaj ja ponownie"<<std::endl;   
                std::cin.clear();
                std::cin.ignore();
            }
            if(e==-2){
                std::cout<<"Przekroczyles wynik 22 podaj liczbe ponownie"<<std::endl;
                wynik-=liczba;
            }
        }
    }
    return 0;
}