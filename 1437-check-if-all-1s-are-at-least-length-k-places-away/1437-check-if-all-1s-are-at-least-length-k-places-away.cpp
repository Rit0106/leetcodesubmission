class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int pind;
        bool f = true;
        for (int i = 0; i < n; i++) {
            if (f && nums[i] == 1) {
                f = false;
                pind = i;
                continue;
            }
            if (nums[i] == 1) {
                if (i - pind - 1 >= k)
                    pind = i;
                else
                    return false;
            }
        }
        return true;
        
    }
};