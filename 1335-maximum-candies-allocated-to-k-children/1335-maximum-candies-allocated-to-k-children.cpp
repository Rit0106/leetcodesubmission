class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        long long ans=0;
        long long sum=0;
        for(int num:candies) sum+=num;
        if(sum < k) return 0;
        int low=1;
        int high=*max_element(candies.begin(),candies.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long cnt=0;

            for(int num:candies){
                cnt+=num/mid;
            }
            if(cnt>=k){
                ans=mid;
                low=mid+1;

            }
            else{
                high=mid-1;
            }

        }
        return ans;
        
    }
};