#include <iostream>
#include <fstream>
int main(){
    std::ifstream file;
    std::string line;
    file.open("kod.txt", std::ios::in);
    if(file.is_open()){
        while(!file.eof()){
            getline(file,line);
            line = line.substr(0,line.find("//"));
            std::cout<<line<<std::endl;
        }
        file.close();
    }
    else std::cerr<<"blad przy otwieraniu"<<std::endl;
    return 0;
}