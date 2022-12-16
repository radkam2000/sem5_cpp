#include "inverse.h"

float inverse(float number){
    if(number == 0){
        throw "podano zero";
    }
    return 1/number;
}