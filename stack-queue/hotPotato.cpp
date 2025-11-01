#include <iostream>
#include <stack>
#include <vector>
#include <queue>

std::string hotPotato(const std::vector<std::string>& players, int k){
    std::queue<std::string> q;
    
    for(std::string player : players){
        q.push(player);
    }
    
    while(q.size() > 1){
        for(int i = 0; i < k; ++i){
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
    return q.front();
}

int main()
{
    std::vector<std::string> players = {"Alice", "Bob", "Charlie", "David"};
    std::cout << hotPotato(players, 7) << '\n';

    return 0;
}