#include <iostream>
#include <array>

template<std::size_t N>

int countEven(std::array<int, N> arr){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main() {
    std::array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    int count = countEven<6>(arr);
    std::cout<<count;
    
    return 0;
}

//Контейнер std::array - 3