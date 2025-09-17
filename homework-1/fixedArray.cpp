#include <iostream>

template <typename T>

class FixedArray{
    public:
    T* arr;
    int N;
    FixedArray(T* arr2, int N) : N(N){
        arr = new T[N];
        for(int i = 0; i < N; i++){
            arr[i] = arr2[i];
        }
    }
    void set(int index, T value){
        arr[index] = value;
    }
    T get(int index){
        return arr[index];
    }
    int size(){
        return N;
    }
    void print(){
        for(int i = 0; i < N; i++){
            std::cout << arr[i] << " ";
        }
        std::cout<<"\n";
    }
    
    ~FixedArray(){
        delete[] arr;
    }
};

int main()
{
    int arr[5] = {5, 8, 9, 7, 2};
    FixedArray<int> array(arr, 5);
    array.set(2, 378);
    array.print();
    
    return 0;
}

// cllas-shablon - 2