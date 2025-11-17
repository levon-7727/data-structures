#include <iostream>
#include <set>
#include <vector>

std::set<int> removeDups(const std::vector<int>& vec){
    std::set<int> st;
    for(int x : vec){
        if(st.count(x) == 0){
            st.insert(x);
        }
    }
    return st;
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 3, 2, 2, 1};
    std::set<int> st = removeDups(vec);
    print(st);

    return 0;
}