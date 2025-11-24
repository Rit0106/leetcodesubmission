class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int val = 0;
        for (int n : nums) {
            val = (val * 2 + n) % 5;
            ans.push_back(val == 0);
        }
        return ans;
        
    }
};