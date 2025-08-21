class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
       int totalsum=0;
       for(int x:cardPoints){
        totalsum+=x;

       }
       if(k==n) return totalsum;

       int windowsize=n-k;
       int currsum=0;
       for(int i=0;i<windowsize;i++){
        currsum+=cardPoints[i];

       }
       int minwindsum=currsum;
       for(int i=windowsize;i<n;i++){
        currsum+=cardPoints[i]-cardPoints[i-windowsize];
        minwindsum=min(currsum,minwindsum);

       }
       return totalsum-minwindsum;


    }
};