class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
        int m=l.size();
        vector<bool>check(m,true);
        for(int i=0;i<m;i++){
        vector<int>sub(nums.begin() +l[i],nums.begin() +r[i]+1);
        sort(sub.begin(),sub.end());
        int d=sub[1]-sub[0];
        for(int j=1;j<sub.size();j++){
            if(sub[j]-sub[j-1]!=d){
                check[i]=false;
                break;
            }
        }
        
    }
    return check;
    }
};