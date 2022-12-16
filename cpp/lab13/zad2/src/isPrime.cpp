#include "isPrime.h"
bool isPrime(int liczba){
    	if(liczba<2)
		return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą
		
	for(int i=2;i*i<=liczba;i++)
		if(liczba%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}