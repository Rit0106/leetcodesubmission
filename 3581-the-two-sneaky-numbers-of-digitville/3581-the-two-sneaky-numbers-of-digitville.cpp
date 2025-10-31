class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
         int n = nums.size() - 2; 
        vector<int> freq(n, 0);
        vector<int> result;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] == 2) {
                result.push_back(num);
            }
        }

        return result;
        
    }
};