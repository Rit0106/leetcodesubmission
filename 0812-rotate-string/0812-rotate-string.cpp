class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
       /* if(n!=m) return false;
        
        for(int i=0;i<n;i++){
            s+=s[i];
            string sub=s.substr(i+1,n+1);
            if(sub==goal) return true;

        }
        return false; */
        if(n==m && (s+s).find(goal)<s.size()){
            return true;
        }
        return false;
        
    }
};