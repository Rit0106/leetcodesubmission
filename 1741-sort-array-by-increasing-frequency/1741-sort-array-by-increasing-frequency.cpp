bool comp(pair<int,int>&a, pair<int,int>&b){
    if(a.second!=b.second) 
    return a.second<b.second;
    return a.first>b.first;
}


class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++) mpp[nums[i]]++;
            vector<pair<int,int>>v(mpp.begin(),mpp.end());
            sort(v.begin(),v.end(),comp);
            for(auto & it :v){
                while(it.second!=0){
                    ans.push_back(it.first);
                    it.second--;
                }
            }
            return ans;
        

        
    }
};