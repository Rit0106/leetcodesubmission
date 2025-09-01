class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans;
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;


        }
        for(auto &p:mp){
            if(p.second==1){
                ans.push_back( p.first);
            }
        }
        return ans;
        
    }
};