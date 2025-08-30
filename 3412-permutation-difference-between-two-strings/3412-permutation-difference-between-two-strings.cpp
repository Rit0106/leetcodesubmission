class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int pdiff=0;
        int n=s.size();
        int m=t.size();
       unordered_map<char, int> pos;  
        for (int i = 0; i < n; i++) {
            pos[s[i]] = i;
        }

        int diff = 0;
        for (int i = 0; i <m; i++) {
            pdiff += abs(i - pos[t[i]]);
        }
        return pdiff;
        
    }
};