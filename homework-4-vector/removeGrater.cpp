#include <iostream>
#include <vector>   

int removeElementsGreaterThan(std::vector<int> &vec, int num){
    int count = 0;
    for(int i = vec.size(); i > 0; i--){
        if(vec[i-1] > num){
            vec.pop_back();
            count++;
        }
    }
    return count;
}



int main()
{
    std::vector<int> vec = {1, 5, 9, 12};
    std::cout<<removeElementsGreaterThan(vec, 5)<<std::endl;

    return 0;
}