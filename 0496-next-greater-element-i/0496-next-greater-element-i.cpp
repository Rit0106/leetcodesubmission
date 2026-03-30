class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans;
      
        for(int i=0;i<n;i++){
            int val=nums1[i];
            int idx=-1;
          
        for(int j=0;j<m;j++){
            if(nums2[j]==val){
                idx=j;
                break;

            }
        }
        int nxtgrt=-1;
        for(int j=idx+1;j<m;j++){
            if(nums2[j]>val){
                nxtgrt=nums2[j];
                break;
            }
        }
        ans.push_back(nxtgrt);
        }
        return ans;
    }
};