#include <iostream>
#include <map>
#include <vector>

int rangeSumMap(std::map<int, int> mp, int l, int r){
    int result = 0;
    for(auto& el : mp){
        if(el.first >= l && el.first <= r){
            result += el.second;
        }
    }
    
    return result;
}

int main()
{
    std::map<int, int> m = {{1, 10}, {3, 20}, {5, 30}, {7, 40}};
    std::cout << rangeSumMap(m, 3, 7) << '\n'; 
    std::cout << rangeSumMap(m, 2, 4) << '\n';
    
    return 0;
}