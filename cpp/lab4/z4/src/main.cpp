#include <vector>
#include <iostream>
#include <ctime>
#include <algorithm>

int sumDigits(int number){
    int sum=0;
    while(number>0){
        sum+=number%10;
        number/=10;
    }
    return sum;
}

int countDigit(int number){
    int sum=0;
    while(number>0){
        sum++;
        number/=10;
    }
    return sum;
}

void print(std::vector<int> v){
    std::for_each(v.begin(),v.end(), [](int n){std::cout<<n<<" ";});
    std::cout<<std::endl;
}

int main(){
    srand((unsigned)time(0)); 
    std::vector<int> liczby;
    for (int i=0;i<25;i++){
        liczby.push_back(rand()%10000+1);
    }
    print(liczby);
    std::sort(liczby.begin(),liczby.end(), [](int l1, int l2){return sumDigits(l1)<sumDigits(l2);});

    print(liczby);
    std::sort(liczby.begin(),liczby.end(), [](int l1, int l2){return countDigit(l1)>countDigit(l2);});
    print(liczby);

    return 0;
}