#include <iostream>
#include <map>
#include <vector>
#include <set>

bool isIsomorphic(const std::string& s, const std::string& t){
    std::map<int, int> mapS;
    std::map<int, int> mapT;
    
    for(char c : s){
        mapS[c]++;
    }
    for(char c : t){
        mapT[c]++;
    }
    std::map<int, int> mp1;
    std::map<int, int> mp2;
    for(auto& el : mapS){
        mp1[el.second]++;
    }
    for(auto& el : mapT){
        mp2[el.second]++;
    }
    for(auto& el : mp2){
        if(mp1[el.first] != el.second) return false;
    }
    return true;
}

int main()
{
    std::cout << isIsomorphic("egg", "add") << '\n';    
    std::cout << isIsomorphic("foo", "bar") << '\n';     
    std::cout << isIsomorphic("paper", "title") << '\n';
    
    return 0;
}