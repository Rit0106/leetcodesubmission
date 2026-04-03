class Solution {
public:
vector<int>getlmax(vector<int>&height , int n){
    
    vector<int > lmax(n);
    lmax[0]=height[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1] , height[i]);
    }
    return lmax;
}
vector<int>getrmax(vector<int>&height , int n){
    vector<int >rmax(n);
    rmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max( rmax[i+1], height[i]);
    }
    return rmax;
}
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
       vector<int>lmax=getlmax(height,n);
       vector<int>rmax=getrmax(height,n);
       for(int i=0;i<n;i++){
        int h=min(lmax[i],rmax[i])-height[i];
        ans+=h;
       }
       return ans;
        
    }
};