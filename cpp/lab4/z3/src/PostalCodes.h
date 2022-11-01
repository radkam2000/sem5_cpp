#ifndef POSTALCODES_H
#define POSTALCODES_H
#include <iostream>

class PostalCodes{
private:
    std::string postal_code;
    int citizen_count=0;
public:
    PostalCodes(std::string postal_code);
    ~PostalCodes();
    void incCitizenCount();
    std::string getPostalCode();
    int getCitizenCount();
};

#endif