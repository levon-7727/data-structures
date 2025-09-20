#include <iostream>
#include <array>

template<typename T, std::size_t N>

std::array<T, N> reverseArray(std::array<T, N> &arr){
    for(int i = 0; i < N/2; i++){
        T x = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = x;
    }
    return arr;
}

int main()
{
    std::array<int, 4> arr = {1, 2, 3, 4};
    arr = reverseArray<int, 4>(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

//Контейнер std::array - 5