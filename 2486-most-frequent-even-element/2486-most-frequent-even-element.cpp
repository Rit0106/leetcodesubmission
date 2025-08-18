class Solution {
public:
   int mostFrequentEven(vector<int>& nums) {
       unordered_map<int,int> freq;
        for (int x : nums) {
            if (x % 2 == 0) {
                freq[x]++;
            }
        }

        if (freq.empty()) return -1;

        int ans = -1, maxFreq = 0;
        for (auto &p : freq) {
            int num = p.first, count = p.second;
            if (count > maxFreq || (count == maxFreq && num < ans)) {
                maxFreq = count;
                ans = num;
            }
        }
        return ans;
    

        
    }
};