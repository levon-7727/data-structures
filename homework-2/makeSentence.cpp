#include <iostream>



std::string makeSentence(std::string last){
    return last + ".";
}
template<typename... Args>
std::string makeSentence(std::string first, Args... args){
    return first + " " + makeSentence(args...);
}
 
int main()
{
    std::cout<<makeSentence("grwjgvhberw", "t42jh4", "iugt");

    return 0;
}

