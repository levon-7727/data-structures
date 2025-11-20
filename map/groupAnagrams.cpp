#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& vec){
    std::map<std::string, std::vector<std::string>> mp;
    std::vector<std::string> vectmp = vec;
    for(auto& el: vec){
        std::sort(el.begin(), el.end());
    }
    
    for(int i = 0; i < vec.size(); i++){
        mp[vec[i]].push_back(vectmp[i]);
    }
    
    std::vector<std::vector<std::string>> result;
    
    for(auto &el : mp){
        result.push_back(el.second);
    }
    return result;
}

void print(const std::vector<std::vector<std::string>>& vec){
    for(auto& el : vec){
        for(std::string s : el){
            std::cout<<s<<" ";
        }
        std::cout<<"\n";
    }   
}

int main()
{
    std::vector<std::string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> result = groupAnagrams(words); 
    print(result);
    
    return 0;
}