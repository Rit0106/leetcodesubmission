class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sumt=0;
        int suml=0,sumr=0;
        for(auto i:nums) sumt+=i;
        for(int i=0;i<n;i++){
           
            sumr=sumt-nums[i]-suml;
            if(suml==sumr){
                return i;
            }
            suml+=nums[i];

        }
        return -1;
        
    }
};