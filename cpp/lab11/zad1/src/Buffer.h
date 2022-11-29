#ifndef BUFFER_H
#define BUFFER_H
class Buffer{
protected:
    virtual void add(int a);
    virtual void write();
    Buffer();
    ~Buffer();
};
#endif