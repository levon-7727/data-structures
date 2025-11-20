#include <iostream>
#include <map>
#include <vector>

char firstUniqueChar(std::string& st){
    std::map<char, int> mp;
    for(char c : st){
        mp[c]++;
    }
    for(int i = 0; i < st.size(); i++){
        if(mp[st[i]] == 1){
            return st[i];
        }
    }
    return -1;
}

void print(const std::map<std::string, int>& mp){
    for(auto& el : mp){
        std::cout<<el.first<<": "<<el.second<<"\n";
    }   
}

int main()
{
    std::string s = "leetcode";
    std::cout << firstUniqueChar(s) << '\n'; 
    
    std::string s2 = "loveleetcode";
    std::cout << firstUniqueChar(s2) << '\n'; 
    
    return 0;
}