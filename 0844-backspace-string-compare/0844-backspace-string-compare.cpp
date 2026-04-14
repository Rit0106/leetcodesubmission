class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                if(!s1.empty())
            s1.pop_back();
                }
            else
           s1.push_back(s[i]);
        }
        for(int j=0;j<m;j++){
            if(t[j]=='#'){
                if(!t1.empty())
            t1.pop_back();
            }
            else 
            t1.push_back(t[j]);

        }
        if(s1==t1) return true;
        else{
            return false;
        }
    }
};