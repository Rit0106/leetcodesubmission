class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
         sort(price.begin(), price.end());
        int n = price.size();
        int low = 0, high = price[n - 1] - price[0], ans = 0;
        
        auto canPick = [&](int d) {
            int count = 1, last = price[0];
            for (int i = 1; i < n; i++) {
                if (price[i] - last >= d) {
                    count++;
                    last = price[i];
                }
                if (count >= k) return true;
            }
            return false;
        };
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canPick(mid)) {
                ans = mid;  
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
        
    }
};