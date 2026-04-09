class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        string ans="";
        stack<pair<char,int>>st;
        for(char ch:s){
            if(st.empty()|| st.top().first!=ch){
                st.push({ch,1});
            }
            else{
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            auto[ ch, count]=st.top();
            st.pop();
            ans+=string(count,ch);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};