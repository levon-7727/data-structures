#include <iostream>
#include <utility>

template<typename T1, typename T2>

std::pair<T1, T2> makePairList(T1 arg1, T2 arg2){
    return std::pair<T1, T2>(arg1, arg2);
}

template<typename T1, typename T2, typename... Args>

auto makePairList(T1 arg1, T2 arg2, Args... args){
    return std::pair<T1, decltype(makePairList(arg2, args...))>(arg1, makePairList(arg2, args...));
}

int main() {
    auto pair1 = makePairList(5, 'c');
    std::cout<<pair1.first<<"\n";

    auto pair2 = makePairList(5, 'c', 4.32);
    std::cout<<pair2.first<<"\n";
    
    auto pair3 = makePairList(1, 2, 3, 4);
    std::cout<<pair3.first<<"\n";
    
    return 0;
}

