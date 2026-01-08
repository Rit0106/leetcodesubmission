class Solution {
public:
    int findMin(vector<int>& nums) {
         int n = nums.size();
        int s = 0 ;
        int e = n -1 ;
        int minele = INT_MAX;
        while( s <= e){
            int mid = s + (e - s)/2;
            if(nums[s] == nums[mid] && nums[mid] == nums[e]){
                minele = min( minele , nums[s]);
                s++ , e-- ;
                continue;
            }
            if(nums[s] <= nums[mid] ){
                minele = min( minele , nums[s]);
                s = mid +1;
            }else{
                minele = min( minele , nums[mid]);
                e = mid - 1;
            }
        }   
            return minele ;
        
    }
};