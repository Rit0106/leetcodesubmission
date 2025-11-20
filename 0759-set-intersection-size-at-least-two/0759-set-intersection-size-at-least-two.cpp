class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
          sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
            if (a[1] == b[1]) return a[0] > b[0];
            return a[1] < b[1];
        });
        int count = 0;
        int last1 = -1, last2 = -1;
        for (auto &in : intervals) {
            int start = in[0], end = in[1];
            if (last2 < start) {
                count += 2;
                last1 = end - 1;
                last2 = end;
            }
            else if (last1 < start) {
                count += 1;
                last1 = last2;
                last2 = end;
            }
        }
        return count;


        
    }
};