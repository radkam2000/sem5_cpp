#include "alter.h"
#include <vector>

int main(){
    std::vector<int> v1={1,2,3,4};
    std::vector<int> v2={1,2,3};
    alter(v1,v2);
    return 0;
}