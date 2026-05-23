class Solution {
public:
    bool checkString(string s) {
         int n = s.length();
         bool fndb=false;
         for(int i=0;i<n;i++){
            if(s[i]=='b') fndb=true;
            if(s[i]=='a' && fndb)
                return false; 
         }
         return true;
    }
};