#include <iostream>
#include <deque>

void removeBothEnds(std::deque<int> &dq, int k){
    for(int i = 0; i < k; i++){
        dq.pop_back();
        dq.pop_front();
    }
}

void print(std::deque<int> dq){
    for(int i = 0; i < dq.size(); i++){
        std::cout<<dq[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    std::deque<int> dq = {1, 2, 3, 4, 5, 6};
    removeBothEnds(dq, 2);
    print(dq);

    return 0;
}