class Solution {
public:
    vector<int>getnsl(vector<int>&arr, int n){
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++){
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            while(!st.empty() && arr[st.top()]>=arr[i])
            st.pop();
            ans[i]=st.empty()?-1:st.top();
        }
        st.push(i);
        }
        return ans;
    }

       vector<int>getnsr(vector<int>&arr, int n){
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans[i]=n;
        }
        else{
            while(!st.empty() && arr[st.top()]>arr[i])
            st.pop();
            ans[i]=st.empty()?n:st.top();
        }
        st.push(i);
        }
        return ans;
    } 

    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long sum=0;
        int M=(int)(1e9+7);
        vector<int>nsl=getnsl(arr,  n);
        vector<int>nsr=getnsr(arr,  n);
        for(int i=0;i<n;i++){
            long long ls=i-nsl[i];
            long long rs=nsr[i]-i;
            long long ways=ls*rs;
            long long totalsum=ways*arr[i];
            sum=(sum+totalsum)%M;
        }
        return sum;
        
    }
};