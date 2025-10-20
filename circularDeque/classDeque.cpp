#include <iostream>

template<typename T>

class CircularDeque{
public:
    T* buffer;
    int size;
    int capacity;
    int front;
    int back;
    
    CircularDeque(int size = 0) : size(size), capacity(size), front(0), back(0), buffer(new T[capacity]){}
    ~CircularDeque(){
        delete[] buffer;
    }
    
    bool isEmpty(){
        return(size == 0);
    }
    
    int getSize(){
        return size;
    }
};

int main()
{
    CircularDeque<int> dq;
    std::cout << "Is empty: " << dq.isEmpty() << '\n';  
    std::cout << "Size: " << dq.getSize() << '\n';

    return 0;
}