#include <iostream>

template<typename T, typename P>

void filter(T* arr, int size, P pred){
    int size2 = 0;
    for(int i = 0; i < size; i++){
        if(pred(arr[i])){
            arr[size2] = arr[i];
            std::cout << arr[size2] << ' ';
            size2++;
        }
    }
}

bool isEven(const int el){
    return el % 2 == 0;
}

int main()
{
   int arr[4] = {5, 2, 9, 0};
   filter(arr, 4, isEven);
   
    return 0;
}