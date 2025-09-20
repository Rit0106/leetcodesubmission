class Solution {
public:
    long long totalhrs(vector<int>& piles, int mid) {
        long long cnt = 0;
        for (int i = 0; i < piles.size(); i++) {
            cnt += ceil((double)piles[i] / mid);
        }
        return cnt;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxPile = piles[0];
        int minPile = 1;
        for (int i = 0; i < n; i++) {
            maxPile = max(maxPile, piles[i]);
        }

        long long ans = maxPile;

        while (minPile <= maxPile) {
            long long mid = minPile + (maxPile - minPile) / 2;

            if (totalhrs(piles, mid) <= h) {
                ans = min(ans, mid);
                maxPile = mid - 1;
            } else {
                minPile = mid + 1;
            }
        }
        return ans;
    }
};