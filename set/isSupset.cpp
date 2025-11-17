#include <iostream>
#include <set>
#include <vector>

bool isSupset(std::vector<int>& vec1, std::vector<int>& vec2){
    std::set<int> st;
    for(int x : vec1){
        st.insert(x);
    }
    for(int x : vec2){
        if(st.count(x) == 0){
            return false;
        }
    }
    return true;
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 5};
    std::cout<<isSupset(vec1, vec2);

    return 0;
}