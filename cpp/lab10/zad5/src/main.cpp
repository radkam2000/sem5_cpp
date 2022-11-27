#include <iostream>
#include <regex>
#include <fstream>
#include <set>
#include <map>

std::set<std::string> uniqeDomains(std::fstream &file){
    std::regex regEx; 
    std::string line;
    std::set<std::string> domains;
    std::smatch match;
    regEx = ("@[A-z0-9]+.[A-z0-9]+");
    while(getline(file,line)){
        std::regex_search(line,match,regEx);
        domains.insert(match.str());
    }
    file.clear();
    file.seekg (0, std::ios::beg);
    return domains;
}

std::vector<std::string> phoneNumbers(std::fstream &file){
    std::regex regEx; 
    std::string line;
    std::vector<std::string> numbers;
    std::smatch match;
    regEx = ("[1-9][0-9]{7}[02468]");
    while(getline(file,line)){
        if(std::regex_search(line,match,regEx)){
            numbers.push_back(match.str());
        }
    }
    file.clear();
    file.seekg (0, std::ios::beg);    
    return numbers;
}

std::vector<std::string> surnamesC(std::fstream &file){
    std::regex regEx; 
    std::string line;
    std::vector<std::string> surnames;
    std::smatch match;
    regEx = ("([A-z])+-([A-z])+");
    while(getline(file,line)){
        if(std::regex_search(line,match,regEx)){
            surnames.push_back(match.str());
        }
    }

    file.clear();
    file.seekg (0, std::ios::beg);
    return surnames;
}

std::map<std::string,int> namesC(std::fstream &file){
    std::regex regEx; 
    std::string line;
    std::map<std::string,int> names;
    std::smatch match;
    regEx = ("([A-z])+");
    while(getline(file,line)){
        std::regex_search(line,match,regEx);
        if(names.find(match.str())!=names.end()){
            names.find(match.str())->second++;
        }else{
            names.insert({match.str(),1});
        }
    }
    file.clear();
    file.seekg (0, std::ios::beg);
    return names;
}

int main(){
    std::cout<<"Uwaga ścieżka prowadzi do pliku w folderze w zadaniu 4, aby zmienić ścieżkę trzeba edytować plik źródłowy"<<std::endl;
    std::string kartotekaPath = "../zad4/kartoteka.txt";
    std::fstream file;
    std::vector<std::string> numbers,surnames;
    std::set<std::string> domains;
    std::map<std::string,int> names; 
    file.open(kartotekaPath, std::ios::in);
    if (file.is_open()){
        domains = uniqeDomains(file);
        numbers = phoneNumbers(file);
        surnames = surnamesC(file);
        names = namesC(file);
        file.close();
    }else{
        std::cout<<"Blad dostepu do pliku"<<std::endl;
        exit(EXIT_FAILURE);
    }
    std::cout<<"Unikalne domeny: "<<std::endl;
    for (auto i:domains){
        std::cout<<i<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Numery telefonów zakończonych liczbą parzystą: "<<std::endl;
    for (auto i:numbers){
        std::cout<<i<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Nazwiska łączone: "<<std::endl;
    for (auto i:surnames){
        std::cout<<i<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Wystepowanie imion: "<<std::endl;
    for(auto i:names){
        std::cout<<i.first<<" :"<<i.second<<std::endl;
    }
    std::cout<<std::endl;
    return 0;
}