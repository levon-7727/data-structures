#include <iostream>
#include <stdexcept>

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
    
    T& operator[](int index){
        if(index < front || index > back){
            throw std::out_of_range("out of range");
        }
        return buffer[index];
    }
    
    const T& operator[](int index) const {
        if(index < front || index > back){
            throw std::out_of_range("out of range");
        }
        return buffer[index];
    }
    
    
};

int main()
{
   
    CircularDeque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    
    std::cout << dq[0] << '\n';  
    std::cout << dq[1] << '\n';  
    std::cout << dq[2] << '\n';  
    
    dq[1] = 25;
    std::cout << dq[1] << '\n';  
        
        

    return 0;
}