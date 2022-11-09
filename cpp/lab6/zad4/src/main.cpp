#include <iostream>
#include <map>
#include <vector>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/mpl/int.hpp>


std::map<std::string,int> mix(boost::fusion::vector<int,double,float,bool,char> v){
    // std::cout<<boost::fusion::at<boost::mpl::int_<2>>(v)<<"kurwa"<<std::endl;
    std::map<std::string,int> m;
    boost::fusion::for_each(v,[&m](auto const &a){
        if(m.find(typeid(a).name())==m.end()){
            std::string t= typeid(a).name();
            m.insert({t,1});
        }
        else{
            auto it=m.find(typeid(a).name());
            it->second++;
        }
        });
    return m; 
}

int main(){
    boost::fusion::vector<int,double,float,bool,char> vec{1,2.2,2.2,true,'a'};
    mix(vec);
    std::map<std::string,int> wynik=mix(vec);
    for(auto const &i :wynik){
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
    return 0;
}