class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int r = mat.size();
        int c= mat[0].size();
        vector<int> row(r,0);
        vector<int> col(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c ; j++){
                if(mat[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row[i]==1|| col[j]==1){
                    mat[i][j]=0;
                }
            }
        }
       
    }
};