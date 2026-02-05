class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                result[i]=0;
            }
            else{
                int newidx=(i+nums[i])%n;
                if(newidx<0) newidx+=n;
                result[i]=nums[newidx];
            }
        }
        return result;
        
    }
};