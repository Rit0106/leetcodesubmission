class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int totsum=0;
        for(int x:arr){
            totsum+=x;
        }
        if(totsum%3 !=0) return false;
        int pos=totsum/3;
        int currsum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum==pos){
                cnt++;
                currsum=0;
            }
        }
        return cnt>=3;
        
    }
};