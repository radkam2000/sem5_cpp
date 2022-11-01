#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int main(){
    Figure* f1=new Square(4);
    Figure* f2=new Circle(2);

    f1->calculateArea();
    f1->show();
    f2->calculateArea();
    f2->show();

    delete f1;
    delete f2;

    Figure *f3;
    Square s1(4);
    f3=&s1;
    f3->calculateArea();
    f3->show();

    return 0;
}
