class Solution {
public:
typedef long long ll;
    ll costfind(vector<int>nums,vector<int>cost , ll target){
        ll result=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            result+=(ll)(abs(nums[i]-target)*cost[i]);
        }
        return result;


    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n=nums.size();
        long long ans=INT_MAX;
        int l=*min_element(nums.begin(),nums.end());
        int r=*max_element(nums.begin(),nums.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            ll cost1=costfind(nums,cost,mid);
            ll cost2=costfind(nums, cost , mid+1);
            ans=min(cost1,cost2);
            if(cost2>cost1){
                r=mid-1;

            }
            else {
                l=mid+1;
            }
        }
        return ans==INT_MAX ? 0: ans;
        
    }
};