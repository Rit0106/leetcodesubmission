class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int res=0;
        int prev=0;
        int strk=1;
        for(int i=1;i<n; i++){
            if(s[i]==s[i-1])
            strk++;
            else{
                prev=strk;
                strk=1;
            }
            if(strk<=prev) res++;
        }
        return res;
        
    }
};