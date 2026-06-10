class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> st(password.begin(), password.end());

        int ans = 0;

        for(char ch : st) {
            if('a' <= ch && ch <= 'z')
                ans += 1;
            else if('A' <= ch && ch <= 'Z')
                ans += 2;
            else if('0' <= ch && ch <= '9')
                ans += 3;
            else if(ch == '!' || ch == '@' || ch == '#' || ch == '$')
                ans += 5;
        }

        return ans;
    }
};