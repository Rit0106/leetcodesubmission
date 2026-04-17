class Solution {
public:
int reverseno(int x){
       int rev = 0;
       while(x>0){
        rev=rev*10 +x%10;
        x/=10;
       }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = INT_MAX;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                ans=min(ans,i-mp[nums[i]]);
            }
            mp[reverseno(nums[i])] = i;
        }

        return (ans==INT_MAX)?-1 : ans;
 
    }
};