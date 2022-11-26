#include <string>
#include <iostream>
#include <regex>
#include <vector>

void sprawdz(std::vector<std::string> tab,std::regex reg){
    for (auto i:tab){
        if (std::regex_match(i,reg)){
            std::cout<<i<<" zgadza się z regexem"<<std::endl;
        }else{
            std::cout<<i<<" nie zgadza się z regexem"<<std::endl;
        }
    } 
}

int main(){
    std::regex ulica,kod,nrDom,nrMiesz;
    ulica = ("([A-z]+ ?)+");
    kod = ("([0-9]{2}-[0-9]{3})");
    nrDom = ("([0-9]{1,3})([A-z])?");
    nrMiesz = ("([1-9^]){1}([0-9]?)*");

    std::vector<std::string> tabU={"ulica jegomoscia","234abecadlo","KEN!"};
    std::vector<std::string> tabK={"12-444","a0-123","2-000","22-00"};
    std::vector<std::string> tabD={"12","76B","a123","234asd"};
    std::vector<std::string> tabM={"0","1","234","asd","asd123"};
    
    sprawdz(tabU,ulica);
    std::cout<<"--------------------"<<std::endl;
    sprawdz(tabK,kod);
    std::cout<<"--------------------"<<std::endl;
    sprawdz(tabD,nrDom);
    std::cout<<"--------------------"<<std::endl;
    sprawdz(tabM,nrMiesz);
}

