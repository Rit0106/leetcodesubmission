class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_map<int, int> freq;
        for (int x : nums)
            freq[x]++;
        vector<int> f;
        for (auto& p : freq)
            f.push_back(p.second);
        int total = nums.size();
        int left = 0;
        for (int count : f) {
            int right = total - left - count;
            ans += left * count * right;
            left += count;
        }
        return ans;
        
    }
};