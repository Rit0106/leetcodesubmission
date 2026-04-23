class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>score(n);
        vector<int>pmax(n);
        vector<int>smin(n);
        pmax[0]=nums[0];
        smin[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pmax[i]=max(pmax[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            smin[i]=min(smin[i+1],nums[i]);

        }
        for(int i=0;i<n;i++){
            score[i]=pmax[i]-smin[i];
            if(score[i]<=k)
            return i;
        }
       return -1;
    }
};