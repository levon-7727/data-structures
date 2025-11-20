#include <iostream>
#include <map>
#include <vector>

std::map<std::string, int> mergeMaps(std::map<std::string, int>& mp1, std::map<std::string, int>& mp2){
    std::map<std::string, int> mpMerged;
    mpMerged = mp1;
    for(auto& el : mp2){
        if(mpMerged.find(el.first) != mpMerged.end()){
            mpMerged[el.first] += mp2[el.first];
        }
        else{
            mpMerged[el.first] = mp2[el.first];
        }
    }
    return mpMerged;
}

void print(const std::map<std::string, int>& mp){
    for(auto& el : mp){
        std::cout<<el.first<<": "<<el.second<<"\n";
    }   
}

int main()
{
    std::map<std::string, int> map1 = {{"a", 1}, {"b", 2}, {"c", 3}};
    std::map<std::string, int> map2 = {{"b", 3}, {"c", 4}, {"d", 5}};
    std::map<std::string, int> result = mergeMaps(map1, map2);
    print(result);
    
    return 0;
}