#include <iostream>
#include "Adding.h"
#include "Student.h"
#include <limits>

template <typename T>
void showAll(T* tab[], int n){
    for(int i=0;i<n;i++)
    tab[i]->show();
}

template <typename T>
void checkType(T a){
    T val=std::numeric_limits<T>::max();
    std::cout<<val<<std::endl;
}

int main(){
    Adding<int> a1(5);
    a1.add(6);
    a1.show();
    Adding<std::string> a2("Pro");
    a2.add("gramowanie");
    a2.show();
    std::cout<<std::endl;

    Student<float> s(5,"Ala");
    s.showMark();
    Student<int> s1(5,"Ala");
    s1.showMark();
    Student<std::string> s2(5,"Ala");
    s2.showMark();
    std::cout<<std::endl;

    Adding<int>* arrAdd[3];
    for(int i=0;i<3;i++){
        arrAdd[i]=new Adding<int>(i);
    }
    showAll(arrAdd,3);
    Student<std::string>* arrStu[2];
    for(int i=0;i<3;i++){
        arrStu[i]=new Student<std::string>(i+2,"Ala");
    }
    showAll(arrStu,3);
    for(int i=0; i<3; i++) delete arrAdd[i];
    for(int i=0; i<2; i++) delete arrStu[i];
    std::cout<<std::endl;

    checkType<int>(3);
    checkType<float>(2.2);
    checkType<double>(2.2);

    return 0;
}
