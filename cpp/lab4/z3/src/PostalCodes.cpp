#include "PostalCodes.h"

PostalCodes::PostalCodes(std::string postal_code){
    this->postal_code=postal_code;
    this->citizen_count++;
}

PostalCodes::~PostalCodes(){
    // std::cout<<"destruktor postalCodes"<<std::endl;
}

void PostalCodes::incCitizenCount(){
    citizen_count++;
}

std::string PostalCodes::getPostalCode(){
    return postal_code;
}

int PostalCodes::getCitizenCount(){
    return citizen_count;
}