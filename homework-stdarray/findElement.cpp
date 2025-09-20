#include <iostream>
#include <array>

template<typename T, std::size_t N>

int findElement(std::array<T, N> arr, T arg){
    for(int i = 0; i < N; i++){
        if(arr[i] == arg){
            return i;
        }
    }
    return -1;
}

int main()
{
    std::array<int, 4> arr = {1, 2, 3, 4};
    std::cout<<findElement(arr, 4);

    return 0;
}