class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        string st;
        for(char ch:num){
            while(!st.empty() && st.back()>ch && k>0){
                st.pop_back();
                k--;

            }
            if(!st.empty() || ch!='0'){
                st.push_back(ch);
            }
        }
        while(!st.empty() && k>0){
            st.pop_back();
            k--;
        }
        return st.empty() ? "0" :st ;
    }
};