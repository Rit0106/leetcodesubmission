class Solution {
public:
    int minimumDeletions(string s) {
        int righta =0;
        for (char c: s) {
            if (c =='a') righta++;
        }
        int leftb = 0;
        int ans = righta;
        for (char c :s) {
            if (c =='a') {
                righta--;
            } else {
                leftb++;
            }
            ans = min(ans,leftb +righta);
        }
        return ans;
        
    }
};