#include "alter.h"
#include <vector>

int main(){
    std::vector<int> v1={1,2,3,4};
    std::vector<int> v2={1,3,4,234,2,43,42,3,52,4};
    alter(v1,v2);
    return 0;
}