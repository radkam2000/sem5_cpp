#include "BufferFile.h"
#include <iostream>
#include <fstream>

BufferFile::BufferFile(std::string filePath){
    this->filePath=filePath;
    std::cout<<"Konstruktor BufferFile"<<std::endl;
}

BufferFile::~BufferFile(){
    std::cout<<"Destruktor BufferFile"<<std::endl;
}

void BufferFile::add(int a){
    std::fstream file;
    file.open(filePath, std::ios::app);
    if (file.is_open()){
        file<<a<<"\n";
        file.close();
    }else{
        std::cerr<<"Nie udalo sie otworzyć pliku"<<std::endl;
    }
}
void BufferFile::write(){
    std::fstream file;
    std::string line;
    file.open(filePath, std::ios::in);
    if (file.is_open()){
        while(getline(file,line)){
            std::cout<<line<<std::endl;
        }
        file.close();
    }else{
        std::cerr<<"Nie udalo sie otworzyć pliku"<<std::endl;
    }
}