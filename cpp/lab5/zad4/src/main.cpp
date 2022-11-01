#include "Dictionary.h"
#include <iostream>

int main(){
    Dictionary D;
    D.addWord("slowo","word");
    D.addWord("luk","bow");
    D.addWord("bezdomny","homeless");
    D.addWord("wagon","cart");

    D.showDictionary();
    std::cout<<"---------------------"<<std::endl;
    D.showTranslation("bezdomny");
    std::cout<<"---------------------"<<std::endl;    
    D.showDictionaryReversedByTranslation();
    std::cout<<"---------------------"<<std::endl;
    D.removeWord("bezdomny");
    D.showDictionary();
    std::cout<<"---------------------"<<std::endl;
    return 0;
}