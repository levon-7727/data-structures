#include <iostream>
#include <array>

std::array<int, 5> createArray(std::array <int, 5> arr){
    for(int i = 0; i < 5; i++){
        arr[i] = i+1;
    }
    return arr;
}

int main() {
    std::array<int, 5> arr = createArray(arr);
    for(int i = 0 ; i < 5; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    
    return 0;
}

//Контейнер std::array - 1