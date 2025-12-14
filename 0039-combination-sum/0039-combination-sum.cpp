class Solution {
public:
   void solve(int start, int &total, int &target, vector<int> &temp, vector<int>& candidates, vector<vector<int>> &res) {
        int n = candidates.size();
        if(total == target) {
            res.push_back(temp);
            return;
        }
        if(start >= n || total > target)
            return;
        for(int i=start; i<n; i++) {
            temp.push_back(candidates[i]);
            total = total + candidates[i];
            solve(i, total, target, temp, candidates, res);
            temp.pop_back();
            total = total - candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        int total = 0;
        solve(0, total, target, temp, candidates, res);
        return res;
    }
};