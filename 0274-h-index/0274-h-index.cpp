class Solution {
public:
    int hIndex(vector<int>& cit) {
         int n=cit.size();
        vector<int> bucket(n+1,0);
        for(int i=0;i<n;i++) {
            if(cit[i]>=n) 
                bucket[n]++;
            else
                bucket[cit[i]]++;
        }
        int papers=0;
        for(int i=n;i>=0;i--) {
            papers+=bucket[i];
            if(papers>=i) 
                return i;
        }
        return 1;
        
    }
};