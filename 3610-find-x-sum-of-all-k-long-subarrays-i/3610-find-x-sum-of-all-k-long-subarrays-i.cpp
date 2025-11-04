class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i + k <= n; i++) {
            vector<int> sub(nums.begin() + i, nums.begin() + i + k);

            unordered_map<int, int> freq;
            for (int num : sub) freq[num]++;

            vector<pair<int,int>> v(freq.begin(), freq.end());
            sort(v.begin(), v.end(), [](auto &a, auto &b){
                if (a.second == b.second) return a.first > b.first;
                return a.second > b.second;
            });

            unordered_set<int> keep;
            for (int j = 0; j < x && j < v.size(); j++) {
                keep.insert(v[j].first);
            }

            int sum = 0;
            for (int num : sub) {
                if (keep.count(num)) sum += num;
            }

            ans.push_back(sum);
        }

        return ans;
        
    }
};