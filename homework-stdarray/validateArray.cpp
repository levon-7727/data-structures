#include <iostream>
#include <array>

template<typename T, std::size_t N>

bool validateArray(std::array<T, N>& arr, int min, int max){
    for(int i = 0; i < N; i++){
        if(arr[i] < min || arr[i] > max){
            return false;
        }
    }
    return true;
}

int main()
{
    std::array<int, 5> arr = {5, 8, 25, 90, 124};
    std::cout<<std::boolalpha;
    std::cout<<validateArray(arr, 5, 124);
    
    return 0;
}

//Контейнер std::array - 11