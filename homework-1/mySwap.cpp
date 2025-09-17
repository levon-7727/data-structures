#include <iostream>

template<typename T>
void myswap(T& el1, T& el2){
    T x = el2;
    el2 = el1;
    el1 = x;
}

int main()
{
    int x = 5, y = 2;
    myswap(x, y);
    std::cout<<x<<" "<<y<<"\n";

    return 0;
}