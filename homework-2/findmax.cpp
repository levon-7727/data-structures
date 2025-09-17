#include <iostream>



int findMax(){
    return 0;
}
template<typename T, typename... Args>
T findMax(T first, Args... args){
    return(first > findMax(args...) ? first : findMax(args...));
}
 
int main()
{
    std::cout<<findMax(5, 4, 89, 108);   

    return 0;
}
