class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>temp;
        for(auto x: grid){
            for(auto y:x)
            temp.push_back(y);
        }
         while(k--){
            int t = temp[temp.size()-1];
            for(int i = temp.size()-1; i>0; i--){
                temp[i] = temp[i-1];
            }
            temp[0] = t;
        }   
        for(int i = 0; i<m; i++){
            for(int j=0; j<n; j++){
                grid[i][j] = temp[i*n+j];
            }
        }
        return grid;

    }
};