class Solution {
public:
    bool isValid(string s) {
        int i;
        stack<char> st;
        for(i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if((s[i]== ')' && !st.empty() && st.top()=='(') ||
            (s[i]=='}' && !st.empty() && st.top()=='{') ||
            (s[i]==']' && !st.empty() && st.top()=='[')
            ){
                st.pop();
            }
            else {
                return false;
            }
        }
        if(st.empty()) {
            return true;
        }
        return false;
    }
};