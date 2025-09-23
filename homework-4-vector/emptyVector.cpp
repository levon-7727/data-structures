#include <iostream>
#include <vector>   

void workWithEmptyVector(int N){
    std::vector<int> vec(N);
    for(int x : vec){
        vec[x] = x+1;
        std::cout<<vec[x]<<" ";
    }
    std::cout<<vec.size()<<" "<<vec.capacity();
    std::cout<<"\n";
}



int main()
{
    workWithEmptyVector(10);

    return 0;
}