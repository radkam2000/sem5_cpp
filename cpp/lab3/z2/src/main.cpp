#include <iostream>

template<typename T>
int minimum(T tab[], int n){
    int min=tab[0];
    for(int i=0;i<n;i++){
        if (tab[i]<min) min=tab[i];
    }
    return min;
}



int main(){
    int tab[10]={3456,345,2,654,3,45,64,6,5,3};
    std::cout<<minimum<int>(tab,10)<<std::endl;

    return 0;
}