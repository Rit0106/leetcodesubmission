class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int penalty = 0;
        for (char c : customers)
            if (c == 'Y') penalty++;
        int minpenalty = penalty;
        int besthour = 0;
        for (int j = 1; j <= n; j++) {
            if (customers[j - 1] == 'Y') penalty--;
            else penalty++;
            if (penalty < minpenalty) {
                minpenalty = penalty;
                besthour = j;
            }
        }
        return besthour;
        
    }
};