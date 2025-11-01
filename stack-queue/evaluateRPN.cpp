#include <iostream>
#include <stack>
#include <vector>

int evaluateRPN(const std::vector<std::string>& vec){
    std::stack<int> st;
    
    for(std::string str : vec){
        if(str == "+"  str == "-"  str == "*" || str == "/"){
            if(st.size() != 2){std::cerr<<"count is false";}
            
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            int result = 0;
            
            if(str == "+"){result = first + second;}
            if(str == "-"){result = first - second;}
            if(str == "*"){result = first * second;}
            if(str == "/"){
                if(second == 0){
                    std::cerr<<"invalid value";
                }
                result = first / second;
            }
            
            st.push(result);
        }
        
        else{st.push(std::stoi(str));}
    }
    return st.top();
}

int main()
{
    std::vector<std::string> expr = {"2", "1", "+", "3", "*"};
    std::cout << evaluateRPN(expr) << '\n';

    return 0;
}