#include <iostream>
#include <stack>
#include <vector>

void reverseString(std::string& str){
    std::stack<char> st;
    for(char c : str){
        st.push(c);
    }
    
    int count = st.size();
    for(int i = 0; i < count; i++){
        str[i] = st.top();
        st.pop();
    }
}

int main()
{
    std::string s = "Hello";
    reverseString(s);
    std::cout << s << '\n';

    return 0;
}