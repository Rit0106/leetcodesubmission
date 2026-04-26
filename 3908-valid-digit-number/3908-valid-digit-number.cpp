class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        int m=s.size();
        char dig=x+'0';
         if(s[0]==dig) return false;
        for(int i=1;i<m;i++){
            
            if(s[i]==dig) return true;
            
        }
        return false;
        
    }
};