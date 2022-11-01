#ifndef ALTER_H
#define ALTER_H
#include <iostream>
#include <vector>
#include <algorithm>

template<class C1> 
void alter(C1 z1,C1 z2){
    typedef typename C1::value_type T1;
    std::vector<T1> sDiffer;
    
    std::sort(z1.begin(),z1.end());
    std::sort(z2.begin(),z2.end());    
    
    auto last = std::unique(z1.begin(),z1.end());
    z1.erase(last,z1.end());
    last = std::unique(z2.begin(),z2.end());
    z2.erase(last,z2.end());

    std::set_difference(z1.begin(),z1.end(),z2.begin(),z2.end(),std::insert_iterator<std::vector<int>>(sDiffer,sDiffer.begin()));
    std::set_difference(z2.begin(),z2.end(),z1.begin(),z1.end(),std::insert_iterator<std::vector<int>>(sDiffer,sDiffer.begin()));
    
    for (const auto &i : sDiffer){
        std::cout<<i<<std::endl;
    } 
}

#endif