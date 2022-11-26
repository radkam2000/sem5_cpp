#include <string>
#include <iostream>
#include <regex>


int main(){
    std::string tekst;
    std::cout<<"Podaj tekst do sprawdzenia czy wystepuje w nim liczba zmiennoprzecinkowa ze znakiem"<<std::endl;
    std::cin>>tekst;
    std::smatch res;
    std::cout<<"znalezione liczby: "<<std::endl;
    while(std::regex_search(tekst, res ,std::regex("([+-][0-9]+.[0-9]+)"))){
        std::cout<<res.str()<<std::endl;
        tekst.erase(0,tekst.find(res.str())+res.length());
    }
    std::cout<<"Liczby nie zostały znalezione"<<std::endl;
    return 0;
}

