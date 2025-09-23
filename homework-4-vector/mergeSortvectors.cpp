#include <iostream>
#include <vector>

std::vector<int> mergeSortvectors(std::vector<int> &vec1, std::vector<int> &vec2){
    std::vector<int> mergedVec;
    int i = 0, j = 0;
    while(i < vec1.size() && j < vec2.size()){
        if(vec1[i] < vec2[j]){
            mergedVec.push_back(vec1[i++]);
        }
        else{
            mergedVec.push_back(vec2[j++]);
        }
    }
    
    while(i < vec1.size()){
        mergedVec.push_back(vec1[i++]);
    }
    
    while(j < vec2.size()){
        mergedVec.push_back(vec2[j++]);
    }
    
    return mergedVec;
}

int main()
{
    std::vector<int> vec1 = {1, 3, 5, 7, 9};
    std::vector<int> vec2 = {2, 4, 6, 8};
    std::vector<int> mergedVec = mergeSortvectors(vec1, vec2);
    for(int x : mergedVec){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;

    return 0;
}