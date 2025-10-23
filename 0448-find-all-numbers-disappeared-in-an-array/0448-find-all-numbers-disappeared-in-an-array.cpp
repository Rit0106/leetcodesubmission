class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        map<int,int> mp;
        for(auto & i: nums){
            mp[i]++;
            mp[j]++;
            j++;

        }
        vector<int>result;
        for( auto & i:mp){
            if(i.second==1){
                result.push_back(i.first);
            }
        }
        return result;

        
    }
};