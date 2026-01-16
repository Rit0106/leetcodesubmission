class Solution {
public:
    int longestPalindrome(string s) {
         int oddcnt = 0;
        unordered_map<char, int> charfq;
        for (char ch: s) {
            charfq[ch]++;
            if (charfq[ch] %2 == 1)
                oddcnt++;
            else
                oddcnt--;
        }
        if (oddcnt > 1)
            return s.length() - oddcnt + 1;
        return s.length();
        
    }
};