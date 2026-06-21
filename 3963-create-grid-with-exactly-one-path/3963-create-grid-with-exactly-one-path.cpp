class Solution {
public:
    vector<string> createGrid(int m, int n) {
        if( m==0 || n==0){
            return {};
        }
       vector<string>grid(m,string(n,'#'));
       int row=0;
       int col=0;
        for(int i=0;i<n;i++){
            grid[row][i]='.';
        }
        for(int j=0;j<m;j++){
            grid[j][n-1]='.';
        }
        return grid;  
    }
};