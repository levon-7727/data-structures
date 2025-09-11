#include <iostream>

template<typename T>

T copyValue(T& value){
    return value;
}

template<typename T>

T* copyValue(T* value){
    T* copy = new T(*value);
    return copy;
}

class Pointer{
public:
    int x;
    Pointer(int x) : x(x){}
};

int main()
{
    Pointer* adress1 = new Pointer(2);
    Pointer* adress2 = copyValue(adress1);
    std::cout<<adress2;
    
    delete adress1;
    return 0;
}

// Сравнение значений - 3