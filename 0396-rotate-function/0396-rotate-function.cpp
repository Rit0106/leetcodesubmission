class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
       long sum=0;
       int n=nums.size();
        long F=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            F+=(long)i*nums[i];
        }
        long result=F;
        for(int k=1;k<n;k++) {
            F = F+sum-(long)n*nums[n-k];
            result = max(result, F);
        }
        return (int)result;
    }
};