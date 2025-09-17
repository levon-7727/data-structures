#include <iostream>

class Logger{
private: 
    int spaces;
public:
    Logger(int spaces) : spaces(spaces){}
    
    template<typename T>
    void print(T arg){
        for(int i = 0; i < spaces; i++){
            std::cout<<" ";
        }
        std::cout<<arg<<"\n";
    }
    
    void _log(){
        
    }
    
    template<typename First, typename... Args>
    void _log(First first, Args... args){
        print(first);
        _log(args...);
    }
    
};

int main()
{
    Logger logger(4);  
    logger._log("Hello", 42, 3.14, 'A');     
    
    return 0;
}

