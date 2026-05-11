class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int val:nums){
           string s=to_string(val);
           for (char c:s){
            ans.push_back(c-'0');
           }
        }
       
        return ans;
        
    }
};