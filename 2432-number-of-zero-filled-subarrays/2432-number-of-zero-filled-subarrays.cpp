class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long cnt=0;
        long long window=0;
        for(int num:nums){
            if(num==0){
                window++;
                cnt+=window;
            }
            else{
                 window=0;
            }
        }
        return cnt;

        
    }
};