#include <iostream>
#include <array>

template<typename T, std::size_t N>

void shiftLeft(std::array<T, N>& arr, int count){
    for(int i = 0; i < count; i++){
        int temp = arr[0];
        for(int j = 0; j < N; j++){
            arr[j] = arr[j+1];
        }
        arr[N-1] = temp;
    }
}


int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    shiftLeft<int, 5>(arr, 2);
    for(int i = 0; i < 5; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}

//Контейнер std::array - 9