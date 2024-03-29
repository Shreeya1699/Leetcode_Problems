class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0)
            return true;
        
        stack<char> st;
        
        for(int i =0 ;i<s.size();i++){
            if(s[i]=='(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if(s[i]==')' || s[i] == ']' || s[i] == '}'){
                if(st.empty())
                    return false;
                else if(s[i]==')' && st.top() != '(')
                    return false;
                else if(s[i]==']' && st.top() != '[')
                    return false;
                else if(s[i]=='}' && st.top() != '{')
                    return false;
                st.pop();
            }
        }
        
        if(st.empty())
            return true;
        else
            return false;
        
    }
};