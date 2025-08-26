class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdiag=0;
        int maxarea=0;
        for(auto &rect : dimensions){
            int len=rect[0];
            int wid=rect[1];
            int diag=len*len +wid*wid;
            int area=len*wid;
            if(diag>maxdiag){
                maxdiag=diag;
                maxarea=area;
            }
            else if(diag==maxdiag){
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
        
    }
};