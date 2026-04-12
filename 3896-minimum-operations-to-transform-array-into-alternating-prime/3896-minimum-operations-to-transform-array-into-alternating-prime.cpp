class Solution {
public:
 bool isPrime(int n) {
        if (n<=1) return false;
        if (n==2) return true;
        if (n%2==0) return false;

        for (int i=3;i*i<=n;i +=2) {
            if (n%i==0)
                return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for (int i =0;i<n;i++) {
            int curr=nums[i];
            int steps =0;
            if (i%2==0) {
                while (!isPrime(curr)) {
                    curr++;
                    steps++;
                }
            }
             else {
                while(isPrime(curr)) {
                    curr++;
                    steps++;
                }
            }
            ans+= steps;
        }
        return ans;
        
        
    }
};