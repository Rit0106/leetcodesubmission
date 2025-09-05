class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>ans;
        int l=0;
        int r=n-1;
        while(r-l>=k){
            if(x-arr[l]>arr[r]-x){
                l++;

            }
            else{
                r--;
            }

        }
        for(int i=l;i<=r;i++){
            ans.push_back(arr[i]);
        }
        return ans;

       
        
        
    }
};