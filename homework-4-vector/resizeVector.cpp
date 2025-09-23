#include <iostream>
#include <vector>

template<typename T>

std::vector<T> resizeVector(std::vector<T> &vec, int n, int num){
    int count = vec.size();
    if(n > count){
        for(int i = 0; i < n - count; i++){
            vec.push_back(num);
        }
    }
    vec.resize(n);
    return vec;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4};
    vec = resizeVector(vec, 6, 8);
    for(int x : vec){
        std::cout<<x<<" ";
    }
    

    return 0;
}