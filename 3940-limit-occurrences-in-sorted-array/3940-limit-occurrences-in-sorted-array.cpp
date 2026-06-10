class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i:nums){
            if(mp[i]<k){
                ans.push_back(i);
                mp[i]++;
            }
        }
       
        return ans;
        
    }
};