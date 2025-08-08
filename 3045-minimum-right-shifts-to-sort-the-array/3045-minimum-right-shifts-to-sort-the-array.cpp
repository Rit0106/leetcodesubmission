class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
         int len = 0, prev = nums[0];
        bool first = false;
        int n=nums.size();
        for(int i = 1; i <= n; ++i){
            if(nums[i % n] < prev){
                if(first) return -1;
                first = true;
                len = n - i;
            }
            prev = nums[i % n];
        }
        return len;

        
    }
};