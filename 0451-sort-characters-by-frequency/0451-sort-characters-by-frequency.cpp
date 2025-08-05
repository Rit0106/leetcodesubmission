class Solution {
public:

  static bool compare(pair<char, int>& a, pair<char, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;  // Lexicographically smaller first
        return a.second > b.second;    // Higher frequency first
    }


    string frequencySort(string s) {
        int n=s.size();
        string ans="";
       

        
        unordered_map<char,int>mpp;
        for(char c:s){
            mpp[c]++;

        }
        vector<pair<char,int>>freq(mpp.begin(),mpp.end());
        sort(freq.begin(),freq.end(),compare);
        for(auto &p:freq){
            ans+=string(p.second,p.first);
        }
        return ans;
        
    }
};