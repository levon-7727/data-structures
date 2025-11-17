#include <iostream>
#include <set>
#include <vector>

int removeRange(std::set<int>& st, int low, int high){
    auto lower = st.lower_bound(low);
    auto upper = st.upper_bound(high);
    int count = 0;
    while(lower != upper){
        int tmp = *lower;
        lower++;
        st.erase(tmp);
        count++;
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
    std::set<int> st = {1, 3, 5, 7, 9, 11, 13, 15};
    int removed = removeRange(st, 5, 11);
    std::cout << removed << '\n';

    return 0;
}