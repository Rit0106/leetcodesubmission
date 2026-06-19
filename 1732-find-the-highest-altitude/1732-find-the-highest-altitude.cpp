class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ans=0;
        vector<int>gaintotal(n+1,0);
        for(int i=0;i<n;i++){
            gaintotal[i+1]=gain[i]+gaintotal[i];
        }
        ans=*max_element(gaintotal.begin(),gaintotal.end());
        return ans;
        
    }
};