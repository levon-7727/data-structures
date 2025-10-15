#include <iostream>
#include <deque>

std::deque<int> createAndFill(int n){
    std::deque<int> dq;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            dq.push_front(i);
        }
        else{
            dq.push_back(i);
        }
    }
    return dq;
}

void print(std::deque<int> dq){
    for(int i = 0; i < dq.size(); i++){
        std::cout<<dq[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    std::deque<int> dq = createAndFill(5);
    print(dq);

    return 0;
}
