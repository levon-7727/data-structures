#include <iostream>
#include <set>
#include <vector>

std::set<int> findMissingNums(std::vector<int>& vec, int N){
    std::set<int> st;
    for(int x : vec){
        st.insert(x);
    }
    for(int i = 1; i <= N; ++i){
        if(st.count(i) != 0){
            st.erase(i);
        }
        else{
            st.insert(i);
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
    std::vector<int> vec = {1, 2, 3, 5};
    std::set<int> st = findMissingNums(vec, 8);
    print(st);

    return 0;
}