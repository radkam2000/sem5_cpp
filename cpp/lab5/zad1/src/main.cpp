#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::pair<int,int> duplikat(std::vector<int> v){
    std::set<int> s;
    std::sort(v.begin(),v.end());
    int suma=0;
    for(std::vector<int>::iterator it = v.begin();it!=v.end();it++){
        s.insert(*it);
    }
    for(std::set<int>::iterator it = s.begin();it!=s.end();it++){
        suma+=*it;
    }
    std::vector<int> sDiffer;
    std::set_difference(v.begin(),v.end(),s.begin(),s.end(),std::insert_iterator<std::vector<int>>(sDiffer,sDiffer.begin()));
    return std::pair<int,int>(suma,*sDiffer.begin());
}


int main(){
    std::vector<int> v = {1,2,3,4,5,6,77,77};
    std::cout<<"Wynik sumy: "<<duplikat(v).first<<" Ktora liczba byla zduplikowana: "<<duplikat(v).second<<std::endl;
}
