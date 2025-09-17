#include <iostream>

template<typename T1, typename T2>


class Pair{
public:
    T1 type1;
    T2 type2;
    Pair(const T1& type1, const T2& type2) : type1(type1), type2(type2){}
    void print(){
        std::cout<<type1<<" "<<type2<<"\n";
    }
};

template<typename T>

class Pair<T, T>{
public:
    T arg1, arg2;
    Pair(const T& arg1, const T& arg2) : arg1(arg1), arg2(arg2){}
    void print(){
        std::cout<<"Pair of identical types: ..."<<"\n";
    }
};

int main()
{
    Pair<int, double> p1(5, 3.14);
    p1.print();  

    Pair<std::string, std::string> p2("pair", "identical");
    p2.print(); 
    
    return 0;
}

// Сравнение значений - 4