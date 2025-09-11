#include <iostream>

template <typename T1, typename T2>

class Pair{
public:
    T1 a;
    T2 b;
    Pair(T1 a, T2 b) : a(a), b(b){}
    void print(){
        std::cout<<a<<" "<<b<<"\n";
    }
};

int main()
{
    Pair<int, int>* nums = new Pair<int, int>(5, 8);
    nums->print();
    delete nums;

    return 0;
}


// cllas-shablon - 1