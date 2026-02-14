class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
      vector<int>pos;
    for (int num:nums)
        if (num >=0)
            pos.push_back(num);
    int m =pos.size();
    if (m <=1) return nums;
    k = k % m;
    rotate(pos.begin(), pos.begin()+k,pos.end());
    int idx = 0;
    for (int i=0;i<nums.size(); i++) {
        if (nums[i] >=0) {
            nums[i] =pos[idx++];
        }
    }
    return nums;
    }
};