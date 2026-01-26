class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        int minsum=INT_MAX;
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1; i++){
            minsum=min(minsum ,arr[i+1]-arr[i]);
        }
        for(int i=0;i<n-1; i++){
            if(minsum==arr[i+1]-arr[i]){
             ans.push_back({arr[i] , arr[i+1]});
        }
        }
        return ans;
        
    }
};