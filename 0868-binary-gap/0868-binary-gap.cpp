class Solution {
public:
    int binaryGap(int n) {
         n >>= __builtin_ctz(n);
         if (n == 1) return 0;
        int maxgap = 0, gap = 0;
        while (n) {
            if (n & 1) {
                maxgap = max(maxgap, gap);
                gap = 0;
            } else
                gap++;
            n >>= 1;
        }

        return maxgap + 1;
        
    }
};