class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_map<int , int> mp;
        for(int x:nums){
            mp[x]++;
        }
        for(int num:nums){
            if(num%2==0 && mp[num]==1){
                return num;
            }
        }
        return -1;
        
    }
};