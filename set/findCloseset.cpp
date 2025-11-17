#include <iostream>
#include <set>
#include <vector>

int findClosest(std::set<int>& st, int target){
    if(st.empty()) return -1;
    auto lower = st.lower_bound(target);
    auto tmp = lower;
    tmp--;
    if(target - *tmp <= *lower - target){
        return *(tmp);
    }
    else{
        return *lower;
    }
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::set<int> st = {1, 5, 10, 15, 20};
    std::cout<<findClosest(st, 12)<<" ";
    std::cout<<findClosest(st, 13);

    return 0;
}