class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
      vector<int> nonNeg;

    // Extract
    for (int num : nums)
        if (num >= 0)
            nonNeg.push_back(num);

    int m = nonNeg.size();
    if (m <= 1) return nums;

    k = k % m;

    // Left rotate using STL
    rotate(nonNeg.begin(), nonNeg.begin() + k, nonNeg.end());

    // Put back
    int idx = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 0) {
            nums[i] = nonNeg[idx++];
        }
    }

    return nums;
    }
};