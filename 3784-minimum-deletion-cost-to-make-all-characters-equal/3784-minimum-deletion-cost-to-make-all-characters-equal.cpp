class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n=s.size();
         set<char> ss; 
       for(int i = 0; i <n; i++){
         ss.insert(s[i]);
       }
       long long ans = LLONG_MAX;
       for(auto j : ss){
        long long c = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != j) c += cost[i]; 
        }
        ans = min(c, ans);    
       }
       return ans;
    }
};