#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

std::vector<int> findIntersection(std::vector<int> &vec1, std::vector<int> &vec2){
    std::unordered_set<int> inter;
    int i = 0;
    while(i < vec1.size()){
        int j = 0;
        while(j < vec2.size()){
            if(vec1[i] == vec2[j]){
                inter.insert(vec2[j]);
            }
            j++;
        }
        i++;
    }
    std::vector<int> result(inter.begin(), inter.end());
    std::sort(result.begin(), result.end());
    return result;
}

int main()
{
    std::vector<int> a = {1, 2, 3, 4, 4};
    std::vector<int> b = {3, 4, 5, 6, 4};
    std::vector<int> inter = findIntersection(a, b);
    for(int x : inter){
        std::cout<<x<<" ";
    }

    return 0;
}