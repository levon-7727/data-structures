#include <iostream>
#include <vector>

template<typename T>

T linearSearch(const std::vector<T>& vec, const T& value){
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == value){
            return value;
        }
    }
}

int main()
{
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(15);
    int num = 15;
    std::cout<<linearSearch<int>(vec, num);
    
    
    return 0;
}

// Функции-шаблоны - 5