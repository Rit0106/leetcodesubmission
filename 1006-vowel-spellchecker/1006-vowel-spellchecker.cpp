class Solution {
public:
bool islower(char c){
    c=tolower(c);
    return c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u';
}

string tolowerstr(const  string &s){
    string t=s;
    for(char &c:t) c=tolower(c);
    return t;

}

string replacenlow(const string &s){
    string t;
    t.reserve(s.size());
    for(char c:s){
        if(islower(c)) t.push_back('*') ;
        else t.push_back(tolower(c));

    }
    return t;
}

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(),wordlist.end());
        unordered_map<string, string> lowermp;
        unordered_map<string , string> vowelmp;
        for (string &w : wordlist) {
            string lw = tolowerstr(w);
            if (!lowermp.count(lw)) lowermp[lw] = w;
            
            string dv = replacenlow(w);
            if (!vowelmp.count(dv)) vowelmp[dv] = w;
        }
        vector<string> ans;
        ans.reserve(queries.size());
        for (string &q : queries) {
            if (exact.count(q)) {  // Exact match
                ans.push_back(q);
                continue;
            }
            string lq = tolowerstr(q);
            if (lowermp.count(lq)) {  // Case-insensitive match
                ans.push_back(lowermp[lq]);
                continue;
            }
            string dq = replacenlow(q);
            if (vowelmp.count(dq)) {  // Vowel-error match
                ans.push_back(vowelmp[dq]);
                continue;
            }
            
            ans.push_back("");  // No match
        }
        return ans;
        
        
    }
};