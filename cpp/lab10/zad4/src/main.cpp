#include <iostream>
#include <regex>
#include <vector>
#include <fstream>

int main(){
    std::regex nameR,surnameR,ageR,phoneNumberR,emailR;
    nameR = ("([A-z])+");
    surnameR =("([A-z])+(-)?([A-z])+");
    ageR = ("([0-9]{1,2})");
    phoneNumberR = ("[1-9][0-9]{8}");
    emailR = ("[A-z]+[A-z1-9_\\-.]*@[A-z0-9]+.[A-z0-9]+");
    std::regex regs[]={nameR,surnameR,ageR,phoneNumberR,emailR};
    std::string tabVars[]={"imie","nazwisko","wiek","nrTelefonu","email"};
    std::vector<std::string> values;
    
    std::string tmp;
    for (auto i:tabVars){
        std::cout<<"Podaj "<<i<<std::endl;
        std::cin>>tmp;
        values.push_back(tmp);
    }

    for (uint i=0; i<values.size();i++){
        if (!std::regex_match(values[i],regs[i])){
            std::cout<<"Niepoprawne dane"<<std::endl;
            exit(EXIT_FAILURE);
        }
    }


    std::fstream file;
    file.open("kartoteka.txt", std::ios::app);
    if(file.is_open()){
        for(auto i:values){
            file<<i<<";";
        }
        file<<"\n";
        std::cout<<"Zapisano dane do pliku"<<std::endl;
        file.close();
    }
    return 0;
}