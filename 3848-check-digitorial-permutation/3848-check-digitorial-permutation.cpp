class Solution {
public:
    bool isDigitorialPermutation(int n) {
         string s=to_string(n);
         vector<int>supdig ={1,2,145,40585};
         sort(s.begin(),s.end());
         for(int x:supdig){
            string t= to_string(x);
            sort(t.begin(),t.end());
            if(s==t)
            return true;
         }
         return false;
    
    }
};