// program kompilowany w standardzie c++17
#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

void printV(std::vector<int> v){
    std::for_each(v.begin(),v.end(),[](auto i){std::cout<<i<<" | ";});
    std::cout<<std::endl;
}

float meanV(std::vector<int> v){
    int licznik=0;
    float suma=0;
    std::for_each(v.begin(),v.end(),[&licznik,&suma](auto i){suma+=i;licznik++;});
    return suma/licznik;
}

int countEvenV(std::vector<int> v){
    return std::count_if(v.begin(),v.end(),[](auto i){return i%2==0;});
}

void deleteNegativeV(std::vector<int> &v){
        std::remove_if(v.begin(),v.end(),[](auto i){return i<0;});
}

void sortEvenUnEvenV(std::vector<int> &v){
        std::partition(v.begin(),v.end(),[](auto a){return (a%2==0);});
}

void makeOppositeV(std::vector<int> &v){
        std::transform(v.begin(),v.end(),v.begin(),[](auto a){return -a;});
}

int countLowerThanV(std::vector<int> v, float lower){
    return std::count_if(v.begin(),v.end(),[lower](auto i){return i<lower;});
}

int main(){
    srand((unsigned) time(NULL));
    std::vector<int> v;
    for (int i=0; i<10;i++){
        v.push_back(-50 + rand()%100);
    }
    printV(v);
    std::cout<<"Srednia: "<<meanV(v)<<std::endl;
    std::cout<<"Ilosc liczb parzystch:"<<countEvenV(v)<<std::endl;
    deleteNegativeV(v);
    std::cout<<"Vector po usunięciu elementów ujemnych"<<std::endl;
    printV(v);
    sortEvenUnEvenV(v);
    std::cout<<"Vector po sortowaniu elementów "<<std::endl;
    printV(v);
    makeOppositeV(v);
    std::cout<<"Vector po zamianie elementów na przeciwne"<<std::endl;
    printV(v);
    std::cout<<"Ilosc elementów mniejszych od podanego"<<std::endl;
    std::cout<<countLowerThanV(v,0)<<std::endl;
    return 0;
}
