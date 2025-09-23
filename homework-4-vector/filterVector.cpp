#include <iostream>
#include <vector>

template<typename T, typename F>

std::vector<T> filterVector(std::vector<T> &vec, F func){
    std::vector<T> filteredVec;
    for(int i = 0; i < vec.size(); i++){
        if(func(vec[i])){
            filteredVec.push_back(vec[i]);
        }
    }
    return filteredVec;
}

bool isEven(int x){return x % 2 == 0;}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> filteredVec = filterVector(vec, isEven);
    for(int x : filteredVec){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;

    return 0;
}