class Solution {
public:
    int nopossubarr(vector<int>& nums, int mid) {
        int sum = 0;
        int cnt = 1;

        for (int num : nums) {
            if (sum + num > mid) {
                cnt++;
                sum = num;
            } else {
                sum += num;
            }
        }
        return cnt;
    }

    int splitArray(vector<int>& nums, int k) {

        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);

        int ans = r;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            int cnt = nopossubarr(nums, mid);

            if (cnt > k) {
                l = mid + 1;
            } else {
                ans = mid;
                r = mid - 1;
            }
        }

        return ans;
    }
};