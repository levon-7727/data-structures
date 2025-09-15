#include <iostream>

template<typename Func>

void aplyAndPrint(Func f){}

template<typename Func, typename First, typename... Args>

void aplyAndPrint(Func func, First first, Args... args){
    std::cout<<func(first)<<"\n";
    aplyAndPrint(func, args...);
}

int square(int x){
    return x * x;
}

int main()
{
    aplyAndPrint(square, 2, 5, 89, 9);

    return 0;
}
