class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans;
      unordered_map<int,int>nxt;
      stack<int>s;
      for(int i=m-1;i>=0;i--){
        while(!s.empty() && s.top()<=nums2[i]){
            s.pop();
        }
        nxt[nums2[i]]=s.empty()?-1 : s.top();
        s.push(nums2[i]);
      }
      for(int num:nums1){
        ans.push_back(nxt[num]);
      }
      return ans;

    }
};