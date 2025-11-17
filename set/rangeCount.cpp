#include <iostream>
#include <set>
#include <vector>

int rangeCount(std::set<int>& st, int low, int high){
    auto lower = st.lower_bound(low);
    auto upper = st.upper_bound(high);
    
    int count = 0;
    while(lower != upper){
        count++;
        lower++;
    }
    return count;
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
    std::cout<<rangeCount(st, 5, 20);

    return 0;
}