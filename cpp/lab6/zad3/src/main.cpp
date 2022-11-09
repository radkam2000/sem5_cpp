#include <iostream>
#include <vector>
#include <boost/bind.hpp>
#include <numeric>
#include <algorithm>

template <typename T>
void statistics(std::vector<T> v){
    double sum = std::accumulate(v.begin(),v.end(),0.0);
    double mean = sum/v.size();
    double median = 0;
    std::cout<<"Liczby mniejsze od sredniej ("<<mean<<")"<<std::endl;
    for(auto const i :v){
        if (i<mean) std::cout<<i<<",";
    }
    std::cout<<std::endl;
    std::sort(v.begin(),v.end());
    if (v.size()%2==0){
        median = (v[int(v.size()/2)-1]+v[int(v.size()/2)])/2;
    }
    else{
        median = v[v.size()/2];
    }
    std::cout<<"liczby miedzy srednia ("<<mean<<") a mediana ("<<median<<")"<<std::endl;
    if (mean>median) std::swap(mean,median);
    for(auto const i :v){
        if (mean<i && i<median){
            std::cout<<i<<",";
        }
    }
    std::cout<<std::endl;
    std::cout<<"Wieksze od 0"<<std::endl;
    for (auto const i:v){
        if(i>0) std::cout<<i<<",";
    }
    std::cout<<std::endl;
}


int main(){
    std::vector<int> v ={1,2,-3,-4,5,2344,25,35};
    auto stat = boost::bind(&statistics<int>,_1);
    stat(v);
    return 0;
}