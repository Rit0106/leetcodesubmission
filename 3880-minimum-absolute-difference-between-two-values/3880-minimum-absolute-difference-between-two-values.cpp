class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        int id1=-1;
        int id2=-1;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
          
            if(nums[i]==1){
                id1=i;
            }
            if(nums[i]==2){
                id2=i;
            }
            if(id1!=-1 && id2!=-1){
            ans=min(ans, abs(id1-id2));
            }
           
        }
        return (ans==INT_MAX) ? -1 :ans ;
        
    }
};