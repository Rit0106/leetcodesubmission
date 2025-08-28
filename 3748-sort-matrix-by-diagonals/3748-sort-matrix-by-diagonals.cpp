class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        auto process=[&](int r, int c , bool ascending){
            vector<int>diag;
            int i=r,j=c;
             while (i < n && j < n) {
                diag.push_back(grid[i][j]);
                i++; j++;
            }
              if (ascending) 
                sort(diag.begin(), diag.end());
                 else 
                sort(diag.rbegin(), diag.rend());
             i = r, j = c;
            int k = 0;
            while (i < n && j < n) {
                grid[i][j] = diag[k++];
                i++; j++;
            }
        };
         for (int i = 0; i < n; i++) {
            process(i, 0, false);
        }
         for (int j = 1; j < n; j++) {
            process(0, j, true); 
        }
        
        return grid;
        
        
    }
};