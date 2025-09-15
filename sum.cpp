#include <iostream>



int sum(){
    return 0;
}
template<typename T, typename... Args>
T sum(T first, Args... args){
    return first + sum(args...);
}
 
int main()
{
    std::cout<<sum(5, 4, 89, 9);   

    return 0;
}

