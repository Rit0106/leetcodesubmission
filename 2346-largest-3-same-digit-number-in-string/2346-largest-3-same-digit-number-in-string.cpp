class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        string maxStr = "";
        
        for (int i = 0; i < n - 2; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string current = string(3, num[i]);
                if (current > maxStr) {
                    maxStr = current;
                }
            }
        }

        return maxStr;
    }
};
