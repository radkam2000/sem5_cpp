#ifndef BUFFERFILE_H
#define BUFFERFILE_H
#include "Buffer.h"
#include <string>

class BufferFile : public Buffer{
private:

    std::string filePath;
    void add(int a);
    void write();

public:
    BufferFile(std::string filePath);
    ~BufferFile();
};

#endif