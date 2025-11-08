class Solution {
public:
long long helper(long long base, long long exp , long long mod){
    long long ans=1;
    while(exp>0){
        if(exp%2==0){
            base=(base*base)%mod;
            exp=exp/2;
        }
        else{
            ans=(ans*base) %mod;
            exp-=1;
        }
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd= n/2;
        long long mod =1e9 +7;
      return (int)((helper(5, even, mod) * helper(4, odd, mod)) % mod);

        
    }
};