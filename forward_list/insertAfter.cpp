#include <iostream>
#include <forward_list>

bool insertAfterPosition(std::forward_list<int> &flst, int index, int value){
    auto it = flst.begin();
    for(int i = 1; i < index; i++){
        it++;
        if(it == flst.end()){
            return false;
        }
    }
    flst.insert_after(it, value);
    return true;
}

int main()
{
    std::forward_list<int> flst = {1, 2, 3, 4, 5};
    std::cout<<insertAfterPosition(flst, 5, 10);

    return 0;
}