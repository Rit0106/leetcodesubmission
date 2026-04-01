class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int a=nums[n-1];
            int b=nums[n-2];
            int c=nums[0];
            ans=a+b-c;

        }
        return ans;
    }
};