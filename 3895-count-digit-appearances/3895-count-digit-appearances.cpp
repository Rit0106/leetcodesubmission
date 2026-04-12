class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        int n=nums.size();
        for(int num:nums){
            if(num==0 && digit==0) {
                ans++;
                continue;
            }
            int temp=num;
            while(temp>0){
                int d=temp%10;
                if(d==digit) ans++;
                temp/=10;
            }
        }
        
        return ans;
    }
};