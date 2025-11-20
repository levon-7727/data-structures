#include <iostream>
#include <map>
#include <vector>

std::map<char, std::vector<std::string>> groupByFirstChar(const std::vector<std::string>& vec){
    std::map<char, std::vector<std::string>> mp;
    for(std::string s : vec){
       mp[s[0]].push_back(s); 
    }
    return mp;
}

void print(const std::map<char, std::vector<std::string>>& mp){
    for(auto& el : mp){
        std::cout<<el.first<<": ";
        for(std::string s : el.second){
            std::cout<<s<<" ";
        }
        std::cout<<"\n";
    }
}

int main()
{
    std::vector<std::string> vec = {"apple", "banana", "apricot", "cherry", "avocado"};
    std::map<char, std::vector<std::string>> result = groupByFirstChar(vec);
    print(result);

    return 0;
}