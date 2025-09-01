class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int r=0;r<n;r++){
            vector<bool> seen(n+1,false);
            for(int c=0;c<n;c++){
                int val=matrix[r][c];
                if(seen[val]) return false;
                seen[val]=true;

            }
        }
        for(int c=0;c<n;c++){
            vector<bool> seen(n+1, false);
            for(int r=0;r<n;r++){
                int val=matrix[r][c];
                if(seen[val]) return false;
                seen[val]=true;
            }
        }
        return true;
        
    }
};