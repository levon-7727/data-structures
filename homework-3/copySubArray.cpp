#include <iostream>
#include <array>
#include <stdexcept>

template<typename T, std::size_t N, std::size_t M>

std::array<T, M> copySubArray(std::array<T, N> &arr1, int begin, int count){
    std::array<T, M> arr2{};
    if(begin < 0  count < 0  (begin + count > N) || count != M){
        throw std::out_of_range("Invalid begin or count");
    }
    for(int i = 0, j = begin; j < count + begin; i++, j++){
        arr2[i] = arr1[j];
    }
    return arr2;
}


int main()
{
    std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
    std::array<int, 3> arr2 = copySubArray<int, 5, 3>(arr1, 1, 3);
    for(int i = 0; i < 3; i++){
        std::cout<<arr2[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

//Контейнер std::array - 7