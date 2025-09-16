class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(auto &pair :items1){
            mp[pair[0]]+=pair[1];
        }
        for(auto &pair : items2){
            mp[pair[0]]+=pair[1];
        }
        for(auto &result:mp){
            ans.push_back({result.first, result.second});
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};