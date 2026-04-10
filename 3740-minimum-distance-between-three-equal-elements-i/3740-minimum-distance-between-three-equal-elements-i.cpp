class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        if(n<3) return -1;
        
        unordered_map<int ,vector<int>>mp;
        for(int i=0;i<n;i++){
            
        mp[nums[i]].push_back(i);
        }
        for(auto &it:mp){
            vector<int>&v=it.second;
            if(v.size()>=3){
                for(int i=0;i<=v.size()-3;i++){
                     int i1 = v[i];
                    int i2 = v[i+1];
                    int i3 = v[i+2];
                    int dist = abs(i1 - i2) + abs(i2 - i3) + abs(i3 - i1);
                    ans=min(ans,dist);
                }
            }
        }
        return (ans==INT_MAX) ? -1:ans;
        
    }
};