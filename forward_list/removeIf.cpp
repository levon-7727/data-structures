#include <iostream>
#include <forward_list>

template<typename func>

size_t removeIf(std::forward_list<int> flst, func f){
    size_t count = 0;
    auto it = flst.begin();
    auto prev = flst.before_begin();
    while(it != flst.end()){
        if(f(*it)){
            it = flst.erase_after(prev);
            count++;
        }
        else{
            it++;
            prev++;
        }
    }
    return count;
}

bool isOdd(int value){
    return(value % 2 != 0);
}

int main()
{
    std::forward_list<int> flst = {1, 2, 3, 4, 5};
    std::cout<<removeIf(flst, isOdd);

    return 0;
}