#include <iostream>
#include <stack>
#include <vector>
#include <queue>

int timeRequiredToBuy(std::vector<int>& vec, int k){
    std::queue<std::pair<int, int>> q;
    
    for(int i = 0; i < vec.size(); i++){
        q.push({i, vec[i]});
    }
    int timeCount = 0;
    while(!q.empty()){
        for(int i = 0; i < vec.size(); i++){
            auto tmp = q.front();
            q.pop();
            tmp.second--;
            timeCount++;
            
            if(tmp.first == k && tmp.second == 0){
                return timeCount;
            }
            if(tmp.second > 0){
                q.push(tmp);
            }
        }
    }
    return timeCount;
}

int main()
{
    std::vector<int> tickets1 = {2, 3, 2};
    std::cout << timeRequiredToBuy(tickets1, 2) << '\n';
    
    std::vector<int> tickets2 = {5, 1, 1, 1};
    std::cout << timeRequiredToBuy(tickets2, 0) << '\n';

    return 0;
}