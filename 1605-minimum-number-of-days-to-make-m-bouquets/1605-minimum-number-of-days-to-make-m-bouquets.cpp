class Solution {
public:
    bool possible(vector<int>& bloomday, int day, int m, int k) {
        int n = bloomday.size();
        int cnt = 0;
        int noB = 0;
        for (int i = 0; i < n; i++) {
            if (bloomday[i] <= day) {
                cnt++;

            } else {
                noB += (cnt / k);
                cnt = 0;
            }
        }
        noB += (cnt / k);
        return noB >= m;
    }
    int minDays(vector<int>& bloomday, int m, int k) {
        int n = bloomday.size();
        int val = (long)m * k;
        if (n < val)
            return -1;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            maxi = max(bloomday[i], maxi);
            mini = min(bloomday[i], mini);
        }
        int low = mini;
        int high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomday, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (low > maxi)
            return -1;
        return low;
    }
};