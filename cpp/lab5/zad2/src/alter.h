#ifndef ALTER_H
#define ALTER_H
#include <iostream>
#include <vector>
#include <algorithm>

template<class C1, class C2> 
void alter(C1 z1,C2 z2){
    // std::vector<auto> v1;
    typedef typename z1::value_type T1;
    typedef typename z2::value_type T2;
    std::vector<T1> sDiffer;
    std::set_difference(z1.begin(),z1.end(),z2.begin(),z2.end(),std::insert_iterator<std::vector<int>>(sDiffer,sDiffer.begin()));


    std::vector<T2> sDiffer2;
    std::set_difference(z2.begin(),z2.end(),z1.begin(),z1.end(),std::insert_iterator<std::vector<int>>(sDiffer2,sDiffer2.begin()));


    // int wynik=0;
    // for(typename T1::iterator it1= z1.begin(); it1!=z1.end();it1++){
    //     for(typename T2::iterator it2=z2.begin();it2!=z2.end();it2++){
    //         if (*it1==*it2) v1.insert();
    //     }
    // }
    // std::cout<<wynik<<std::endl;
}

// template<class Seq>
// void show_sequence(Seq const& sequence)
// {
//     typedef typename Seq::value_type T;
//     for_each(sequence.begin(), sequence.end(), show_element<T>);    
// }


#endif