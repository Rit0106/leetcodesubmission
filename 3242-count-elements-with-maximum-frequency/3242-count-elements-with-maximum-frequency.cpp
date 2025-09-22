class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int freq=0;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;

        }
        for(auto &pair: mp){
            if(pair.second==freq){
                cnt++;

            }
            else if(pair.second>freq){
                freq=pair.second;
                cnt=1;
            }
        }
        int ans=freq*cnt;
        return ans;

        
    }
};