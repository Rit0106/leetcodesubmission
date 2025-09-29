class Solution {
public:
   int minimizedMaximum(int n, vector<int>& quantities) {
        
        auto canDistribute = [&](int x) {
            long long stores = 0;
            for (int q : quantities) {
                stores += (q + x - 1) / x;
            }
            return stores <= n;
        };

        int left = 1, right = *max_element(quantities.begin(), quantities.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2; 
            if (canDistribute(mid)) {
                ans = mid;       
                right = mid - 1;
            } else {
                left = mid + 1;  
            }
        }

        return ans;
    }
};