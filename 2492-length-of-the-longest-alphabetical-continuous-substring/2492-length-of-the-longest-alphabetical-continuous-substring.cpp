class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int cnt=1;
        int ans=1;
        for(int i=0;i<n-1;i++){
            if(s[i+1]-s[i]==1){
                cnt++;
                ans=max(cnt,ans);
            }
            else{
                cnt=1;
            }
        }
        return ans;
        
    }
};