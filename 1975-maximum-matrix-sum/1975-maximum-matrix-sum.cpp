class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int minabs=INT_MAX;
        int cntneg=0;
        for(auto& row: matrix){
            for(int x: row){
                minabs=min(minabs, abs(x));
                if (x<0){
                    sum-=x;
                    cntneg++;
                }
                else{
                    sum+=x;
                }
            }
        }
        return (cntneg&1)?sum-2*minabs:sum;
        
    }
};