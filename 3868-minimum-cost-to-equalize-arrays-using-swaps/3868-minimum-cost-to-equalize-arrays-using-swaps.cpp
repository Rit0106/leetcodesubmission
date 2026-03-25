class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int ans=0;
        unordered_map<int ,int >mp;
        for(int num:nums1) 
        mp[num]++;
        for(int num:nums2)
        mp[num]--;
        for(auto [k,v] : mp){
            if(v%2) return -1;
            if(v>0) ans+=v/2;
        }
        return ans;

        
    }
};