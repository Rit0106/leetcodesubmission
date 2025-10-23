class Solution {
public:
    bool hasSameDigits(string s) {
       vector<int> num;
        for (char c : s) num.push_back(c - '0');

        while (num.size() > 2) {
            vector<int> next;
            for (int i = 0; i < num.size() - 1; i++) {
                next.push_back((num[i] + num[i + 1]) % 10);
            }
            num = next;
        }
        return num[0] == num[1];
        
    }
};