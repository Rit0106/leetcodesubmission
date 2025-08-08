class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        /*
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int sum2=0;
        for(int j=n-1;j>=0;j--){
            

            if(sum>=sum2){
                sum2+=nums[j];
                sum-=nums[j];
                ans.push_back(nums[j]);
            }
        }
        return ans;
        */
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int totalsum=0;
        for(int num: nums){
            totalsum+=num;
        }
        int windowsum=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            windowsum+=nums[i];
            ans.push_back(nums[i]);

        
        
        if(windowsum>totalsum-windowsum){
            break;

        }}
        return ans;
        
    }
};