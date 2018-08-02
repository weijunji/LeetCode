#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        string::iterator it = s.begin();
        while(it != s.end()){
            if(*it == '(' || *it == '[' || *it == '{'){
                st.push(*it);
            }else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(!((*it == ')' && top == '(') || (*it == ']' && top == '[') || (*it == '}' && top == '{'))){
                    return false;
                }
            }
            it++;
        }
        if(st.empty()) return true;
        else return false;
    }
};