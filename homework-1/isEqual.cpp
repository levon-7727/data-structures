#include <iostream>
#include <cstring>

template<typename T>

bool isEqual(T arg1, T arg2){
    return (arg1 == arg2);
}

template<>

bool isEqual<char*>(char* arg1, char* arg2){
    return strcmp(arg1, arg2);
}

int main()
{
    int x = 5, y = 5;
    std::cout<<isEqual<int>(x, y);
    std::string t = "hjg";
    std::string n = "hjg";
    std::cout<<isEqual(t, n);

    return 0;
}

// Сравнение значений - 2