#include <iostream>
#include <deque>

class Logger{
public:
    std::deque<std::string> dq;
    int capacity;
    Logger(int N) : capacity(N){}
    
    void add(std::string text){
        dq.push_back(text);
        if(dq.size() > capacity){
            dq.pop_front();
        }
    }
    void show(){
        for(int i = 0; i < capacity; i++){
            std::cout<<dq[i]<<" ";
        }
        std::cout<<std::endl;
    }
};

int main()
{
    Logger Log(3);
    Log.add("start");
    Log.add("init");
    Log.add("run");
    Log.add("stop");    
    Log.show();

    return 0;
}