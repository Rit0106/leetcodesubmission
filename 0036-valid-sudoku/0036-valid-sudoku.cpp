class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board ) {
      
//initialize boolean arrays to track digits in each row,column , and subgrid
      bool row[9][9]={false};
      bool col[9][9]={false};
      bool boxes[9][9]= {false};
      //iterate through each cell in the sudoku board
      for(int r=0; r<9 ; r++){
        for(int c =0; c<9; c++){
            if(board[r][c]=='.')
            continue;
            int idx = board[r][c]-'1';
            int gridNum = (r/3)*3+(c/3);
            if(row[r][idx]|| col[c][idx]|| boxes[gridNum][idx]){
                return false;
            }
            row[r][idx]= true;
            col[c][idx]= true;
            boxes[gridNum][idx] = true ;

        }
      }
      return true;}
};