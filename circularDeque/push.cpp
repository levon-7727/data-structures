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
    
    void resize(){
        int newCapacity = (capacity == 0 ? 1 : capacity * 2);
        T* newBuffer = new T[newCapacity];
        
        for(int i = 0; i < size; i++){
            newBuffer[i] = buffer[(front +i ) % capacity];
        }
        delete[] buffer;
        capacity = newCapacity;
        buffer = newBuffer;
        front = 0;
        back = size - 1;
        
    }
    
    void push_back(const T& value){
        if(size == capacity){
            resize();
        }
        
        back++;
        if(back == capacity){back = 0;}
        
        buffer[back] = value;
        size++;
    }
    
    void push_front(const T& value){
        if(size == capacity){
            resize();
        }
        
        front--;
        if(front == -1){front = capacity - 1;}
        
        buffer[front] = value;
        size++;
    }
};

int main()
{
    CircularDeque<int> dq;
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);
    std::cout << "Size: " << dq.getSize() << '\n';

    return 0;
}