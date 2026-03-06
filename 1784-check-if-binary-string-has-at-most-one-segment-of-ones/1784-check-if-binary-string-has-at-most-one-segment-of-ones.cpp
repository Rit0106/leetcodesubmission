class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        int i=n-1;
        while(s[i]=='0' && i>=0) i--;
        while(i>=0){
            if(s[i]=='0' ) return false ;
            i--;
        }
        return true;
    }
};