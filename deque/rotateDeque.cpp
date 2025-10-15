#include <iostream>
#include <deque>
#include <cmath>

template<typename T>

void rotateDeque(std::deque<T> &dq, int k){
    if(k){
        for(int i = 0; i < k; i++){
            auto it = dq.rbegin();
            T tmp = *it;
            dq.pop_back();
            dq.push_front(tmp);
        }
    }
    else{
        k = abs(k);
        for(int i = 0; i < k; i++){
            auto it = dq.begin();
            T tmp = *it;
            dq.pop_front();
            dq.push_back(tmp);
        }
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
    std::deque<int> dq = {1, 2, 3, 4, 5};
    rotateDeque(dq, 2);
    print(dq);

    return 0;
}