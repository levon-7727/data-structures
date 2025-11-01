#include <iostream>
#include <stack>
#include <vector>
#include <queue>

std::vector<std::string> generateBinaryNumbers(int n){
    std::vector<std::string> vec;
    std::queue<std::string> q;
    
    q.push("1");
    
    for(int i = 0; i < n; i++){
        std::string tmp = q.front();
        q.pop();
        vec.push_back(tmp);
        
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
    return vec;
}

int main()
{
    std::vector<std::string> result = generateBinaryNumbers(5);
    for(std::string str : result){
        std::cout<<str<<"\n";
    }

    return 0;
}