class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
       
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i+2<n;i++){
            int a=nums[i];
            int b=nums[i+1];
            int c=nums[i+2];
            if( b+c>a){
                return a+b+c;   
            }
        } 
        return 0;   
    }
};