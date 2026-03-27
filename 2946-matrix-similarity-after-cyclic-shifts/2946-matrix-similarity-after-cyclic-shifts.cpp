class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int r=mat.size();
        int c=mat[0].size();
        k%=c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i%2==0){
                if(mat[i][j]!=mat[i][(j+k)%c])
                return false;
                }
                else{
                    if(mat[i][j]!=mat[i][(j-k+c) %c])
                    return false;
                }
            }
        }
        return true;
        
    }
};