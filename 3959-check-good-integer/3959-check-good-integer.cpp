class Solution {
public:
    bool checkGoodInteger(int n) {
        string s=to_string(n);
        int digsum=0;
        int sqsum=0;
        for(char ch:s){
            int dig=ch-'0';
            digsum+=dig;
            sqsum+=dig*dig;

        }
        return (sqsum-digsum>=50) ? true : false ;
        
    }
};