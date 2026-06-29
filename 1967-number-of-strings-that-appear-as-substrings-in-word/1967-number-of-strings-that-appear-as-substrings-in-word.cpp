class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size();
        int ans=0;
        for(string & ch : patterns){
            if(word.find(ch)!=string::npos)
                ans++;
        }
        return ans;
        
    }
};