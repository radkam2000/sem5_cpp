//program kompilowany w standardzie c++17
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

std::tuple<int,float,std::string> stats(std::vector<std::string> v){
    int shortS = std::min_element(v.begin(),v.end(),[](auto &a, auto &b){return a.size()<b.size();})->size();
    int licznik = 0;
    int suma =0;
    std::for_each(v.begin(),v.end(),[&suma,&licznik](auto &i){suma+=i.size();licznik++;});
    float mean =  suma/licznik;
    std::string longS = *std::max_element(v.begin(),v.end(),[](auto &a, auto &b){return a.size()<b.size();});
    return {shortS,mean,longS};
}

int main(){
    std::vector<std::string> napisy={"name","samochod","auto","snieg","swieta","kot","rewolwerowiec"};
    auto tp = stats(napisy);
    std::cout<<"Ilosc liter w najkrotszym wyrazie: "<< std::get<0>(tp)<<std::endl;
    std::cout<<"Srednia ilosc liter w wyrazie: "<< std::get<1>(tp)<<std::endl;
    std::cout<<"Najdluzszy wyraz: "<< std::get<2>(tp)<<std::endl;
    return 0;
}