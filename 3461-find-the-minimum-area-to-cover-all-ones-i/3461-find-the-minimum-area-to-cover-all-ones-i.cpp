class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int minrow=row,maxrow=-1;
        int mincol=col, maxcol=-1;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    minrow=min(minrow,i);
                    maxrow=max(maxrow,i);
                    mincol=min(mincol,j);
                    maxcol=max(maxcol,j);

                }
            }
        }
        if(maxrow==-1) return 0;
        int height=maxrow-minrow+1;
        int width = maxcol-mincol+1;
        int result=height*width;
        return result;

        
    }
};