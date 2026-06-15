class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        string ans="";
        stack<int>st;
        for(char ch:s){
            if(ch=='('){
                st.push(ans.length());
            }
            else if( ch==')'){
                int l=st.top();
                st.pop();
                reverse(begin(ans)+l, end(ans));
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};