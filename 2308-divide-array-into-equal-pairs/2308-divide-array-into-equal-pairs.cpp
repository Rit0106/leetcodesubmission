class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0) return false;
        unordered_map<int, int> mp;
        for(int i=0;i<n ;i++){
            mp[nums[i]]++;

        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        for(auto & it: v){
            int a=it.second;
            if(a%2!=0){
                return false;
            }
        }
        return true;
       
        
    }
};