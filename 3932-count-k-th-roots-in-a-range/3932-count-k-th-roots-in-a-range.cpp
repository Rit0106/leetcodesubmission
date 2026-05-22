class Solution {
public:
    long long countKthRoots(long long l, long long r, long long k) {
        int ans=0;
        int left=ceil(pow(l,1.0/k)-1e-9);
        int right=floor(pow(r,1.0/k)+1e-9);
        ans=max(ans,right-left+1);
        return ans;
        
    }
};