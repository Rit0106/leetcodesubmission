class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int cnt=i;
            int num=nums[n-1-i];
            if(num*cnt>sum)
            res+=1;
            sum+=num;
        }
        return res;
    }
};