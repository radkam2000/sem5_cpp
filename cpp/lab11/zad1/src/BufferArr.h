#include "Buffer.h"
#include <memory>

class BufferArr : public Buffer {
private:
    int rozmiar;
    int freeSpace=0;
    std::unique_ptr<int[]> tab;
public:
    void add(int a);
    void write();
    BufferArr(int rozmiar);
    ~BufferArr();
};