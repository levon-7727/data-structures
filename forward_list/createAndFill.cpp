#include <iostream>
#include <forward_list>

void creatAndFill(int N){
    std::forward_list<int> flst = {};
    
    for(int i = 1; i <= N; i++){
        flst.push_front(i);
    }
    auto it = flst.begin();
    for(; it != flst.end(); it++){
        std::cout<<*it<<" ";
    }
    std::cout<<'\n';
}

int main()
{
    creatAndFill(5);

    return 0;
}