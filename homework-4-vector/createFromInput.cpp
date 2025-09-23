#include <iostream>
#include <vector>   

std::vector<int> createVectorFromInput(){
    std::vector<int> vec(0);
    int arg;
    while(arg != 0){
        std::cin>>arg;
        if(arg == 0){
            break;
        }
        vec.push_back(arg);
    }
    return vec;
}



int main()
{
    std::vector<int> vec(100);
    vec = createVectorFromInput();
    for(int i = 0; i < vec.size(); i++){
        std::cout<<vec[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}