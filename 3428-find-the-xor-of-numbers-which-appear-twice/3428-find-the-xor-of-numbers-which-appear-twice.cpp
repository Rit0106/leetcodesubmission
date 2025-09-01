class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }

        for( auto &p:mp){
         if(p.second==2)
         ans^=p.first;
        }  
        return ans;      
    }
};