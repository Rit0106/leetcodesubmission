class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
       int n=nums.size();
       if(n==1) return -1;
       vector<long long> pref(n);
       pref[0]=nums[0];
       for(int i=1;i<n;i++)
        pref[i]=pref[i-1]+nums[i];
        long long total=pref[n-1];
       for(int i=1;i<n;i++)
        if(nums[i]==0)
        return 0;
        if(pref[n-2]==1)
        return n-1;
        long long prod=1;
        int ans=n;
        for(int i=n-2;i>=1;i--){
            if(nums[i+1] !=0 && prod > total/nums[i+1])
            break;
            prod *=nums[i+1];
            if(pref[i-1]== prod)
            ans=i;
        }
        if(ans==n) return -1;
        return ans;
       
    }
};