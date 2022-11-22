#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student{
private:
    std::string name;
    std::string surname;
    char gender;
    int grade;
    std::string mail;
public:
    Student(std::string name, std::string surname, char gender, int grade, std::string mail);
    void showStudent();
    std::string getSurname();
    int getGrade();
};

#endif