class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        for(int r=0;r<row;r++){
            int p=0;
            for(int c=0;c<col;c++){
                if(grid[r][c]=='.'){
                    swap(grid[r][c],grid[r][p]);
                    p++;
                }
                else if(grid[r][c]=='*')
                p=c+1;
            }
        }
        vector<vector<char>>res(col,vector<char>(row));
        for(int r=0;r<row;r++)
            for(int c=0;c<col;c++)
                res[c][row-1-r]=grid[r][c];

        return res;
        
    }
};