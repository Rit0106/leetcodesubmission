class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n=nums.size();
        int max=*max_element(nums.begin(), nums.end());
        int min=*min_element(nums.begin(), nums.end());
        if((max-k)-(min+k) >0)
        return (max-k)-(min+k);

       return 0;
        
    }
};