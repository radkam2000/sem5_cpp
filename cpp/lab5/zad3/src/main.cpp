#include <iostream>
#include <map>
#include <algorithm>

char roznica(std::string w1, std::string w2){
    std::map<char,int> m1;
    std::map<char,int> m2;

    if(m1.size()>m2.size()) swap(m1,m2);

    int value;
    for(const char i :w1){
        value=0;
        if (m1.find(i)!=m1.end()) value=m1.find(i)->second;
        m1.insert_or_assign(i,++value);
    }
    for(const char i :w2){
        value=0;
        if (m2.find(i)!=m2.end()) value=m2.find(i)->second;
        m2.insert_or_assign(i,++value);
    }

    for(std::map<char,int>::iterator it = m2.begin();it!=m2.end();it++){
        if (m1.find(it->first)==m1.end()) return it->first;
        if(it->second - m1.find(it->first)->second) return it->first;
    }
    return 0;
}


int main(){
    std::cout<<roznica("klasyka","k2lasyka")<<std::endl;
    return 0;
}