#include <iostream>
#include <map>
#include <vector>

std::map<int, int> countFrequency(const std::vector<int>& vec){
    std::map<int, int> mp;
    for(int x : vec){
        mp[x]++;
    }
    return mp;
}

void print(const std::map<int, int>& mp){
    for(auto el : mp){
        std::cout<<el.first<<" "<<el.second<<"\n";
    }
}

int main()
{
    std::vector<int> nums = {4, 2, 3, 4, 2, 3, 4, 3, 1, 4};
    std::map<int, int> result = countFrequency(nums);
    print(result);

    return 0;
}