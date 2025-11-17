#include <iostream>
#include <set>
#include <vector>

std::set<int> symmetricDifference(std::vector<int>& vec1, std::vector<int>& vec2){
    std::set<int> st1;
    std::set<int> st2;
    
    for(int x : vec1){
        st1.insert(x);
    }
    for(int x : vec2){
        st2.insert(x);
    }
    for(int x : vec2){
        if(st1.count(x) == 1){
            st1.erase(x);
        }
    }
    for(int x : vec1){
        if(st2.count(x) == 1){
            st2.erase(x);
        }
    }
    for(int x : st2){
        st1.insert(x);
    }
    return st1;
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::vector<int> arr1 = {1, 2, 3, 4};
    std::vector<int> arr2 = {3, 4, 5, 6};
    std::set<int> st = symmetricDifference(arr1, arr2);
    print(st);

    return 0;
}