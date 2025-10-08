#include <iostream>
#include <forward_list>
#include <vector>
#include <utility>

void insertionSort(std::forward_list<int> &flst){
    for(auto it = flst.begin(); it != flst.end(); it++){
        auto j = flst.begin();
        while(j != it){
            if(*j > *it){
                std::swap(*j, *it);
            }
            ++j;
        }
    }
}

void print(std::forward_list<int> &flst){
    for(auto &x : flst){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    std::forward_list<int> flst{5, 2, 4, 3, 1};
    insertionSort(flst);
    print(flst);

    return 0;
}