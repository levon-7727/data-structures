#include <iostream>
#include <set>
#include <vector>

int firstRepeating(std::vector<int>& vec){
    std::set<int> st;
    int count = 0;
    for(int x : vec){
        st.insert(x);
        count++;
        if(count > st.size()){
            return x;
        }
    }
    return -1;
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 2, 5, 6, 3};
    std::cout << firstRepeating(nums) << '\n';

    return 0;
}