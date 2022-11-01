#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>

template <typename T>
void show(T &con){
    for(typename T::iterator it=con.begin( );
        it!=con.end( ); it++)
            std::cout<<*it<<" ";
    std::cout<<std::endl;
}

int main(){
    srand (time(NULL));
    int n=rand()%100+1;
    std::list<int> lista;
    lista.push_back(n);

    for (int i=0;i<n;i++){
        int l=rand()%201-100;
        if (l<0) lista.push_back(l);
        if (l>=0) lista.push_front(l);
    }

    show(lista);

    return 0;
}