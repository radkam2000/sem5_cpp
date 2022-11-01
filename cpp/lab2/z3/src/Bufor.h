#ifndef BUFOR_H
#define BUFOR_H 

class Bufor{
    int* tab;
    int tab_size;
    int first_free;

    Bufor();
    Bufor(int tab_size);
    virtual ~Bufor();
    virtual void add(int value);
    virtual double calculate()=0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void setTab(int pos, int value);
    void show();
};

#endif