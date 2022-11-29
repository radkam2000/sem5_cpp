#ifndef BUFFER_H
#define BUFFER_H
class Buffer{
public:
    virtual void add(int a)=0;
    virtual void write()=0;
    Buffer();
    ~Buffer();
};
#endif