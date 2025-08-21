class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        vector<int>fr(26);
        for(char ch: s){
            fr[ch-'a']++;
        }
        int del=0;
        unordered_set<int>set;
        for(int x:fr){
            if(x!=0){
                if(set.find(x)==set.end()){ //not present before in set
                    set.insert(x);
                }
                else{
                    while(set.find(x)!=set.end()){ // present in set already
                    x--;
                    del++;

                    }
                    if(x!=0) set.insert(x);
                }
            }
        }
        return del;

        
    }
};