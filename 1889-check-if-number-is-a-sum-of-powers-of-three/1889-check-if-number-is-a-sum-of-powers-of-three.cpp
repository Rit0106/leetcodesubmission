class Solution {
public:
    bool checkPowersOfThree(int n) {
        if(n<=0){
            return false;
        }
        while (n > 0) {
            int rem = n % 3;
            if (rem == 2) return false;
            n /= 3;
        }
        return true;
        
    }
};