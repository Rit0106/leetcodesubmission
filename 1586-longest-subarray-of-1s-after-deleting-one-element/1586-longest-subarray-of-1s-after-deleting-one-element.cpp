class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int l=0;
        int r=0;
        int zero=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0) zero++;

            while(zero>1){
                if(nums[l]==0) zero--;
                l++;
            }
            ans=max(ans,r-l);
        }
        return ans;
        
    }
};