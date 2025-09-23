#include <iostream>
#include <vector>

std::vector<std::vector<int>> groupAdjacent(std::vector<int> &vec){
    std::vector<std::vector<int>> vecAdj;
    int i = 0;
    while(i < vec.size()){
        int j = i+1;
        while(j < vec.size() && vec[j] == vec[i]){
            j++;
        }
        std::vector<int> vecTemp(vec.begin() + i, vec.begin() + j);
        vecAdj.push_back(vecTemp);
        i = j;
    }
    return vecAdj;
}

int main()
{
    std::vector<int> vec = {1, 1, 2, 2, 2, 3, 1, 1};
    std::vector<std::vector<int>> vecAdj = groupAdjacent(vec);
    for (std::vector<int> vecTemp : vecAdj) {
        std::cout << "{ ";
        for (int num : vecTemp) {
            std::cout << num << " ";
        }
        std::cout << "}\n";
    }

    return 0;
}