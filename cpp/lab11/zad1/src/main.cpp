#include "BufferArr.h"
#include "BufferFile.h"
#include <vector>
#include <memory>

int main(){
    std::vector<std::unique_ptr<Buffer>> tab;
    for (int i=0;i<5;i++){
        tab.push_back(std::make_unique<BufferArr>(i+1));
    }
    for(int i=2;i<30;i=i+2){
        tab[4]->add(i);
    }
    tab[4]->write();
    tab.push_back(std::make_unique<BufferFile>("plik.txt"));
    for(int i=2;i<50;i=i+4){
        tab[5]->add(i);
    }
    tab[5]->write();
    tab.clear();
    return 0;
}