#include <iostream>
#include <set>
#include <cmath>

bool hasAllCodes(const std::string& s, int k){
    if(s.size() < std::pow(2, k)) return false;
    std::set<std::string> st;
    std::string tmp;
    for(int i = 0; i < s.size() - k; i++){
        tmp = s.substr(i, k);
        st.insert(tmp);
    }
    return st.size() == std::pow(2, k);
}

void print(const std::set<int>& st){
    for(int x : st){
        std::cout<<x<<" "; 
    }
    std::cout<<std::endl;
}

int main()
{
    std::cout << hasAllCodes("00110110", 2) << '\n';
    
    std::cout << hasAllCodes("0110", 1) << '\n';
    
    std::cout << hasAllCodes("0110", 2) << '\n';    
    
    std::cout << hasAllCodes("0000000001011100", 4) << '\n';

    return 0;
}