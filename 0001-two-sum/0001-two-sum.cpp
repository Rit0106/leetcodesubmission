class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<vector<int>>v;
        for(int i = 0 ; i<n.size()  ; i++){
            vector<int>temp;
            temp.push_back(n[i]);
            temp.push_back(i);
            v.push_back(temp);
        }
      sort(v.begin(),v.end());

      int l =0 ; 
      int r= n.size()-1;
      while(l<r){
        if(v[l][0]+v[r][0]>t){
            r--;
        }
        else if (v[l][0]+v[r][0]<t){
            l++;
        }
        else
        return{v[l][1],v[r][1]};
      }
      return{};
    }
       
};