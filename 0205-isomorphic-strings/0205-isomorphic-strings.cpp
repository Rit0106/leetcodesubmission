class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int S=s.size();
        int T=t.size();
        if(S!=T) return false;
        unordered_map<char,int> charindexS;
        unordered_map<char,int> charindexT;
        for(int i=0;i<S;i++){
            if(charindexS.find(s[i])==charindexS.end()){
                charindexS[s[i]]=i;
            }
            if(charindexT.find(t[i])==charindexT.end()){
                charindexT[t[i]]=i;
            }
            if(charindexS[s[i]]!=charindexT[t[i]]){
            return false;}
        }
        return true;}
        /*
        unordered_map<char,char> mapST;
        unordered_map<char,char> mapTS;
        for(int i=0;i<S;i++){
            char cs=s[i];
            char ct=t[i];
            if(mapST.count(cs)){
                if(mapST[cs]!=ct) return false;
            } else{mapST[cs]=ct;}

              if(mapTS.count(ct)){
                if(mapTS[ct]!=cs) return false;
            } else{mapTS[ct]=cs;}
        }
        return true;
        
    }*/
};