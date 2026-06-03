class Solution {
public:
    
    int calc(vector<int>& s1, vector<int>& d1,
             vector<int>& s2, vector<int>& d2) {

        int earliestEnd = INT_MAX;

        for (int i = 0; i < s1.size(); i++) {
            earliestEnd = min(earliestEnd, s1[i] + d1[i]);
        }

        int ans = INT_MAX;

        for (int i = 0; i < s2.size(); i++) {
            ans = min(ans,
                     max(earliestEnd, s2[i]) + d2[i]);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        return min(
            calc(landStartTime, landDuration,
                 waterStartTime, waterDuration),

            calc(waterStartTime, waterDuration,
                 landStartTime, landDuration)
        );
    }
};