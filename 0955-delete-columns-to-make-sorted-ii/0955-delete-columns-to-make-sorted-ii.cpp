class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        bool resolv[n];
        memset(resolv, false, sizeof(resolv));
        int ans = 0;
        for(int j = 0; j < m; j ++){
            bool take = true;
            for(int i = 0; i < n - 1; i ++){
                if(resolv[i]) continue;
                if(strs[i][j] > strs[i + 1][j]){
                    take = false;
                    break;
                }
            }
            if(take){
                for(int i = 0; i < n - 1; i ++){
                    if(!resolv[i] && strs[i][j] < strs[i + 1][j]){
                        resolv[i] = true;
                    }
                }
            }
            else{
                ans += 1;
            }
        }
        return ans;
        
    }
};