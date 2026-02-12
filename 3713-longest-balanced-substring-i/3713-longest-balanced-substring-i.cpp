class Solution {
public:
    int longestBalanced(string s) {
        unordered_map<char, int> mp;
        int n = s.size();
        int ans = 0;
        for(int i = 0;i<n;i++) {
            mp = {};
            for(int j =i;j<n;j++) {
                mp[s[j]]++;
                bool flag= true;
                int cnt=mp[s[j]];  
                for(auto x : mp) {
                    if(x.second !=cnt) {
                        flag= false;
                        break;
                    }
                }
                if(flag) {
                    ans = max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};