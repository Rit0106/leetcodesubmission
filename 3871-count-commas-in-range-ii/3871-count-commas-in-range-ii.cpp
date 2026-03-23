class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n<999) return 0;
        for(long long start=1000 ;start<=n ;start*=10){
            long long end=min(n, start*10-1);
            int dig=to_string(start).size();
            int com=(dig-1)/3;
            ans+=(end-start +1)*com;
        }
        return ans;
        
    }
};