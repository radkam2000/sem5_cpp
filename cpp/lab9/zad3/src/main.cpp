#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"

std::fstream openFilePath(std::string path){
    std::fstream file;
    file.open(path);
    if (file.fail()){
        throw 1;
    }
    return file;
}

// Student getStudentFromFile(std::fstream &file){
//     std::string word,tmp;
//     char gender;
//     int grade;
//     std::vector<std::string> v;
//     while(getline(file,word,';')){
//         v.push_back(word);
//     }
//     tmp = v[3];
//     gender = char(tmp[0]);
//     tmp = v[4];
//     grade = stoi(tmp);
//     return Student(v[0],v[1],gender,grade,v[4]);
// }

std::vector<Student> getStudentFromFile(std::fsream &file){
    std::string word,name,surname,mail;
    char gender;
    int grade;
    std::vector<Student> s;
    while()){
        word>>name
    }
}

int main(){
    std::vector<Student> students;
    std::string path;
    std::fstream file;

    std::cout<<"Podaj sciezke pliku: "<<std::endl;
    std::cin>>path;
    try{
        file=openFilePath(path);
    }
    catch(...){
        std::cerr<<"Nie mozna otworzyc pliku";
        exit(EXIT_FAILURE);
    }
        getStudentFromFile(file);
    return 0;
}