// Valid Parenthesis


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(char c : s) {
            
            if(c == '(' or c == '{' or c == '[') 
                st.push(c);
            
            else if(st.empty())
                return false;
            
            else if(c == ')') {
                if(st.top() == '(')
                    st.pop();
                else 
                    return false;
            }
            
            else if(c == '}') {
                if(st.top() == '{')
                    st.pop();
                else 
                    return false;
            }
            
            else if(c == ']') {
                if(st.top() == '[')
                    st.pop();
                else 
                    return false;
            }
            
        }
        
        return st.empty();
        
    }
};
