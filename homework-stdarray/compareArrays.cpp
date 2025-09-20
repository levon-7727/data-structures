#include <iostream>
#include <array>

template<typename T, std::size_t N>

bool compareArrays(std::array<T, N> arr1, std::array<T, N> arr2){
    for(int i = 0; i < N; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    std::array<int, 3> arr1 = {1, 2, 3};
    std::array<int, 3> arr2 = {1, 3, 2};
    std::cout << std::boolalpha;
    std::cout<<compareArrays<int, 3>(arr1, arr2)<<"\n";

    return 0;
}

//Контейнер std::array - 6