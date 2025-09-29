class Solution {
public:
int sumd(vector<int>& nums, int div){
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+=ceil((double)(nums[i])/(double)(div));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
      
       if(n>threshold) return -1;
       int ans=0;
       int l=1;
       int h=*max_element(nums.begin(),nums.end());
       while(l<=h){
        int mid=l+(h-l)/2;
        if(sumd(nums,mid)<=threshold){
            ans=mid;
             h=mid-1;
             
        }
        else{
              l=mid+1; 
           

    }
 }
      return ans;

        
    }
};