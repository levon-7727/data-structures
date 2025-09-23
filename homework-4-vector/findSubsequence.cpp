#include <iostream>
#include <vector>

int findSubsequence(std::vector<int> &vec1, std::vector<int> &vec2){
    if(vec2.size() > vec1.size()){
        return -1;
    }
    
    for(int i = 0; i < vec1.size(); i++){
        bool found = true;
        for(int j = 0; j < vec2.size(); j++){
            if(vec1[i+j] != vec2[j]){
                found = false;
            }
        }
        if(found) return i;
    }
    return -1;
}
int main()
{
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {2, 3};
    int result = findSubsequence(vec1, vec2);
    std::cout<<result<<"\n";

    return 0;
}