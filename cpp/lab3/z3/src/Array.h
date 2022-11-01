#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>

template<typename T>
class Array{
private:
    T* tab;
    int size;
    int first_free;
public:
    Array(int size);
    Array();
    ~Array();

    void sortInc();
    T getMaxElem();
    void show();
    void addElem(T value);
    T getElem(int index);
};


template<typename T>Array<T>::Array(){
    this->tab=new T[10];
    this->size=10;
    this->first_free=0;
    std::cout<<"Konstruktor bezparametrowy"<<std::endl;
}

template<typename T>Array<T>::Array(int size){
    this->tab=new T[size];
    this->size=size;
    this->first_free=0;
    std::cout<<"Konstruktor parametrowy"<<std::endl;
}

template<typename T>Array<T>::~Array(){
    delete []tab;
    std::cout<<"Destruktor"<<std::endl;
}

template<typename T>T Array<T>::getMaxElem(){
    int max=tab[0];
    for(int i=0;i<size;i++){
        if (max<tab[i]) max=tab[i];
    }
    return max;
}

template<typename T>void Array<T>::sortInc(){
	for(int i=0;i<size;i++){
		for(int j=1;j<size-i;j++) if(tab[j-1]<tab[j]) std::swap(tab[j-1], tab[j]);
    }
}

template<typename T>void Array<T>::show(){
    std::cout<<"Elementy tablicy:"<<std::endl;
    for (int i=0;i<size;i++){
        std::cout<<tab[i]<<", ";
    }
    std::cout<<std::endl;
}

template<typename T>void Array<T>::addElem(T value){
    this->tab[first_free]=value;
    first_free++;
}

template<typename T>T Array<T>::getElem(int index){
    return tab[index-1];
}

template<>
std::string Array<std::string>::getMaxElem(){
    std::string max=tab[0];
    for(int i=0;i<size;i++){
        if (max.length()<tab[i].length()) max=tab[i];
    }
    return max;
}

template<>
void Array<std::string>::sortInc(){
	for(int i=0;i<size;i++){
		for(int j=1;j<size-i;j++){ 
            if(tab[j-1].length()<tab[j].length()) swap(tab[j-1], tab[j]);
        }
    }
}

#endif