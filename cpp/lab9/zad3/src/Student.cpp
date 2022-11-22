#include "Student.h"
#include <iostream>
#include <iomanip>

template<typename T> void printElem(T elem){
    std::cout<<std::internal<<std::setw(20)<<std::setfill('_')<<elem;
}


Student::Student(std::string name, std::string surname, char gender, int grade, std::string mail){
    this->name = name;
    this->surname = surname;
    this->gender = gender;
    this->grade = grade;
    this->mail = mail;
}

void Student::showStudent(){
    printElem(name);
    printElem(surname);
    printElem(gender);
    printElem(grade);
    printElem(mail);
    std::cout<<std::endl;
}

std::string Student::getSurname(){
    return surname;
}

int Student::getGrade(){
    return grade;
}