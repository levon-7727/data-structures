#include <iostream>

template<typename T>

T sumArray(const T* array, const T& size){
    T sum{};
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

int main()
{
   int arr[5] = {1, 2, 3, 4, 5};
   std::cout<<sumArray(arr, 5);

    return 0;
}