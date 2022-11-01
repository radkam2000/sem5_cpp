#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <iostream>

class Dictionary{
private:
    std::map<std::string, std::string> words;
public:
    Dictionary();
    void addWord(std::string word, std::string translation);
    void removeWord(std::string word);
    void showDictionary();
    void showTranslation(std::string word);
    void showDictionaryReversedByTranslation();
};

#endif