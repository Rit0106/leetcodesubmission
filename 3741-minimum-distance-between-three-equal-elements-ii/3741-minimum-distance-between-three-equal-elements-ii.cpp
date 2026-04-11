class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        unordered_map<int,vector<int>>mp;
        if(n<3) return -1;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &it:mp){
            vector<int>&v=it.second;
            if(v.size()>=3){
                for(int i=0;i<v.size()-2;i++){
                int dist=2*(v[i+2]-v[i]);
                ans=min(ans,dist);
            }
        }}
        return (ans==INT_MAX)? -1:ans;
    }
};