class Solution {
public:
    int countTriples(int n) {
        int total = 0;
        for(int i = 1; i <= n; ++i){
            for(int j = i; j <= n; ++j){
                int c = (i*i) + (j*j);
                int d = sqrt(c);
                if(d*d == c && sqrt(c) <= n) total += 2;
            }
        }
        return total;
        
    }
};