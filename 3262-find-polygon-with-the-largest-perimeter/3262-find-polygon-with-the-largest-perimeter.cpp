class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long total = 0;             
        for (int num : nums) total += num;
        if (n < 3) return -1;
        for (int i = n - 1; i >= 2; --i) {
            long long longest = nums[i];
            long long others = total - longest;
            if (others > longest) {
                return total;            
            }
            total -= longest;          
        }
        return -1;
    }
};
