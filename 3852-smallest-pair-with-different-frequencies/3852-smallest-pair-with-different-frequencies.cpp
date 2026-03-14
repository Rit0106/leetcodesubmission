class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==2) return {-1,-1};
        unordered_map<int, int>mp;
        for(int x:nums) mp[x]++;
        vector<int>ans;
        for(auto &p:mp) ans.push_back(p.first);
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size(); i++){
            for(int j=i+1;j<ans.size(); j++){
                if(mp[ans[i]]!=mp[ans[j]])
                return {ans[i], ans[j]};
            }
        }
        return {-1,-1};
        
        
    }
};