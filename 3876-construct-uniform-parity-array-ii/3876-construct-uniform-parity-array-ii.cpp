class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int mini=INT_MAX;
        bool odd=false;
        for(auto x:nums1){
            if(x%2){
                odd=true;
                mini=min(mini,x);
            }
        }
        if(!odd) return true;
        for(int x:nums1){
            if(x%2==0 && mini>x) return false;
        }
        return true;
    }
};