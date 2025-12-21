class Solution {
public:
  void funct(int idx, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {
        if (idx == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        funct(idx + 1, nums, temp, ans);
        temp.pop_back();
        funct(idx + 1, nums, temp, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        funct(0, nums, temp, ans);
        return ans;
    }
};