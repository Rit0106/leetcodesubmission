class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        int ans=0;
       unordered_set<string>st;
       for(int num:arr1){
        string s1=to_string(num);
        string temp="";
        for(char ch:s1){
            temp+=ch;
            st.insert(temp);
        }
       }
       for(int num2:arr2){
        string s2=to_string(num2);
        string temp="";
        for(int i=0;i<s2.size();i++){
            temp+=s2[i];
            if(st.count(temp))
                ans=max(ans,i+1);
        }
       }
       return ans;
         
    }
};