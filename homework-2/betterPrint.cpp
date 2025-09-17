#include <iostream>
#include <utility>

template<typename T>

void type(T&& arg){
    std::cout<<arg<<" [rvalue]"<<"\n";
}

template<typename T>

void type(T& arg){
    std::cout<<arg<<" [lvalue]"<<"\n";
}

void betterPrint() {}

template<typename First, typename... Args>

void betterPrint(First&& first, Args&&... args){
    type(std::forward<First>(first));
    betterPrint(std::forward<Args>(args)...);
}

int main() {
    int x = 42;
    betterPrint(x, 100, "hello");

    
    return 0;
}

