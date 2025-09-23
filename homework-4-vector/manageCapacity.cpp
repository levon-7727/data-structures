#include <iostream>
#include <vector>   

void manageCapacity(std::vector<int> &vec){
    std::cout<<vec.size()<<" "<<vec.capacity()<<std::endl;
    vec.reserve(500);
    for(int i = 0; i < vec.capacity(); i++){
        vec.push_back(i+1);
    }
    std::cout<<vec.size()<<" "<<vec.capacity()<<std::endl;
}



int main()
{
    std::vector<int> vec(0);
    manageCapacity(vec);

    return 0;
}