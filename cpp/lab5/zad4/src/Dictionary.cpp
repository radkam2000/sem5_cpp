#include "Dictionary.h"
#include <iostream>
#include <vector>

#include <algorithm>

Dictionary::Dictionary(){
    std::cout<<"Konstruktor bezparametrowy"<<std::endl;
}

void Dictionary:: addWord(std::string word,std::string translation){
    words.insert({word,translation});
}

void Dictionary:: removeWord(std::string word){
    words.erase(word);
}

void Dictionary:: showDictionary(){
    for(std::map<std::string,std::string>::iterator it = words.begin();it!=words.end();it++){
        std::cout<<it->first<<" "<<it->second<<std::endl;
    }
    std::cout<<std::endl;
}

void Dictionary::showTranslation(std::string word){
    std::cout<<word<<" "<<words[word]<<std::endl;
}

void Dictionary::showDictionaryReversedByTranslation(){
    std::vector<std::string> v;
    for (const auto &i : words){
        v.push_back({i.second});
    }
    std::sort(v.begin(),v.end(),std::greater<std::string>());
    for(const std::string &i : v){
        for(const std::pair<std::string,std::string> j : words){
            if(i==j.second) std::cout<<j.first<<" "<<j.second<<std::endl;
        }   
    }
}