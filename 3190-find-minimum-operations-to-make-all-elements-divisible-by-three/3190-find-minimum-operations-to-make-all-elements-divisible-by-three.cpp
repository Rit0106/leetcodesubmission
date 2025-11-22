class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
       for(int n:nums){
        if(n%3!=0 ) {
        ans++;
        }
       }
       return ans;
    }
};