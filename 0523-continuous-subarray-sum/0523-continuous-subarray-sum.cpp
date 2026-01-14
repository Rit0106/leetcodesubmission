class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     unordered_map<int, int> remis;
    int currsum = 0;
    remis[0] = -1; 
    for (int i = 0; i < nums.size(); i++) {
        currsum += nums[i];
        int remain = currsum % k;
        if (remis.find(remain) != remis.end()) {
            if (i - remis[remain] >= 2) {
                return true;
            }
        } else {
            remis[remain] = i;
        }
    }
    return false; 
    }
};