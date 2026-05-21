class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.size();
        for(int i=0;i<n-1;i++){
                int diff=abs(s[i+1]-s[i]);
                if(diff>2)
                    return false;
            
        }
        return true;
    }
};