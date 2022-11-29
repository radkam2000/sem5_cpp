#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <map>
#include <string>
#include <vector>

class Warehouse{
private:
    std::map<std::string, int> towar;
public:
    Warehouse(std::vector<std::string> nazwaTowaru,std::vector<int> iloscTowaru);
    ~Warehouse();
    void show();
    int getIloscTowaru(std::string nazwaTowaru);
    void setIloscTowaru(std::string nazwaTowaru, int iloscTowaru);
};

#endif