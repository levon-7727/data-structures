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
    
    T pop_back(){
        if(isEmpty()){return;}
        
        size--;
        T tmp = buffer[back];
        back--;
        if(back == -1){
            back = capacity - 1;
        }
        return tmp;
    }
    
    T pop_front(){
        if(isEmpty()){return -1;}
        
        size--;
        T tmp = buffer[front];
        front++;
        if(front == capacity){
            front = 0;
        }
        return tmp;
    }
    
    T Front() const {
        return buffer[front];
    }
    
    T Back() const {
        return buffer[back];
    }
};

int main()
{
    CircularDeque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(0);
    
    std::cout << "Front: " << dq.Front() << '\n';  
    std::cout << "Back: " << dq.Back() << '\n';    
    
    int val = dq.pop_front();
    std::cout << "Popped: " << val << '\n';        
    std::cout << "Size: " << dq.getSize() << '\n';;
        

    return 0;
}