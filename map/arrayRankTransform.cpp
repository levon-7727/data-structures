#include <iostream>
#include <map>
#include <vector>
#include <set>

std::vector<int> arrayRankTransform(const std::vector<int>& vec){
    std::map<int, int> mp;
    std::set<int> s(vec.begin(), vec.end());
    int rank = 1;
    
    for(int x : s){
        mp[x] = rank++;
    }
    
    std::vector<int> result;
    for(int x : vec){
        result.push_back(mp[x]);
    }
    return result;
}

int main()
{
    std::vector<int> arr = {40, 10, 20, 30};
    std::vector<int> result = arrayRankTransform(arr);
    for(int x : result){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    
    std::vector<int> arr2 = {100, 100, 100};
    std::vector<int> result2 = arrayRankTransform(arr2);
    for(int x : result2){
        std::cout<<x<<" "; 
    }
    
    return 0;
}