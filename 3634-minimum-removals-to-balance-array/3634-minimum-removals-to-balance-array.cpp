class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxbal=1;
        
        int l=0;
        for(int r=0;r<n;r++){
            while(nums[r]>(long long)nums[l]*k){
                l++;
            }
            maxbal=max(maxbal,r-l+1);
        }
        return n-maxbal;
        
        
    }
};