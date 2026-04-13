class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int ans=0;
        int manans=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans=abs(i-start);
                manans=min(manans,ans);
            }
        }
        return manans;
    }
};