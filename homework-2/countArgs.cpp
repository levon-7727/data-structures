#include <iostream>



int countArgs(){
    return 0;
}
template<typename T, typename... Args>
T countArgs(T first, Args... args){
    return 1 + countArgs(args...);
}
 
int main()
{
    std::cout<<countArgs(5, 5, 8, 48);   

    return 0;
}

