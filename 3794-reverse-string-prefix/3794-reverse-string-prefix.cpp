class Solution {
public:
    string reversePrefix(string s, int k) {
        int n=s.size();
        if(k==1) return s;
        reverse(s.begin(),s.begin()+k);
        return s;
        
    }
};