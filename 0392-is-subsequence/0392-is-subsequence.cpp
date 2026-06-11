class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(s==t) return true;
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(s[i]==t[j])
                i++;
            j++;
        }
        return i==n;
        
        
    }
};