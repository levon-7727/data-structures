#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::vector<int> topKFrequent(std::vector<int>& vec, int k){
    std::map<int, int> mp;
    for(int x : vec){
        mp[x]++;
    }
    std::vector<std::pair<int, int>> vecTmp;
    
    for(auto& el : mp){
        vecTmp.push_back({el.second, el.first});
    }
    
    std::sort(vecTmp.begin(), vecTmp.end());
    std::sort(vecTmp.rbegin(), vecTmp.rend());
    
    std::vector<int> result;
    for(int i = 0; i < k; i++){
        result.push_back(vecTmp[i].second);
    }
    return result;
}

int main()
{
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    std::vector<int> result = topKFrequent(nums, 2);
    for(int x : result){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    
    return 0;
}