#include <iostream>
#include <array>

std::array<int, 7> fillArray(std::array <int, 7> arr, int n){
    for(int i = 0; i < 7; i++){
        arr[i] = n;
    }
    return arr;
}

int main() {
    std::array<int, 7> arr = fillArray(arr, 42);
    for(int i = 0; i < 7; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    
    return 0;
}

//Контейнер std::array - 2