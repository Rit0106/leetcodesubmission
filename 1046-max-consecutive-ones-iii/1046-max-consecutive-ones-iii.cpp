class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int l=0;
        int r=0;
        int flips=0;
        int len=0;
        
            while(r<n){
                if(nums[r]==1)
                r++;
                else{
                    if(flips<k){
                        flips++;
                        r++;
                    }
                    else{
                        len=r-l;
                        ans=max(ans,len);
                        while(nums[l]==1) l++;
                        l++;
                        r++;
                    }
                }
            }
            ans=max(ans,r-l);
            return ans;
        
        
    }
};