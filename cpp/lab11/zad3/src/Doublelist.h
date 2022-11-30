#ifndef DOUBLELIST_H
#define DOUBLIELIST_H
#include <memory>

class Element{
private:
    int data;
    std::shared_ptr<int> next;
    std::weak_ptr<int> prev;
public:
    Element(int data);
    ~Element();
    std::shared_ptr<int> getNext();
    std::weak_ptr<int> getPrev();
    void setNext();
    void setPrev();
};

class DoubleList{
private:
    int counter=0;
    std::shared_ptr<Element> head;
    std::shared_ptr<Element> tail;
public:

};
//https://xfido.com/html/indexC++DoubleLinkedListWithSmartPointer.html
#endif 