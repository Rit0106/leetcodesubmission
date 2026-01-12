class Solution {
public:
    string minWindow(string s, string t) {
       if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }
        vector<int> map(128, 0);
        int cnt= t.length();
        int start= 0;
        int end= 0;
        int minlen = INT_MAX;
        int idx = 0;
        for (char c: t) {
            map[c]++;
        }
        while (end< s.length()) {
            if (map[s[end++]]-- > 0) {
                cnt--;
            }
            while (cnt== 0) {
                if (end - start< minlen) {
                    idx= start;
                    minlen = end - start;
                }
                if (map[s[start++]]++ == 0) {
                    cnt++;
                }
            }
        }
        return minlen == INT_MAX ? "" :s.substr(idx, minlen);
    }
};