#include <iostream>
#include <set>
#include <vector>

std::set<int> findInsertion(std::vector<int>& vec1 , std::vector<int>& vec2){
    std::set<int> st;
    std::set<int> result;
    for(int x : vec1){
        st.insert(x);
    }
    for(int x : vec2){
        if(st.count(x) == 1){
            result.insert(x);
        }
    }
    return result;
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::vector<int> vec1 = {1, 2, 3, 3, 2, 2, 1, 4, 5, 5, 7, 8, 9};
    std::vector<int> vec2 = {1, 2, 3, 2, 1, 4, 5, 8, 7};
    std::set<int> result = findInsertion(vec1, vec2);
    print(result);

    return 0;
}