class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0;
        int n=text.size();
       unordered_set<char> brokenkeys;
       for(auto& c:brokenLetters){
        brokenkeys.insert(c);
       }
       stringstream ss(text);
       string word;
       vector<string> words;
       while(ss >> word){
        words.push_back(word);
       }
       for(auto w:words){
        for(char c:w){
            if(brokenkeys.find(c)!=brokenkeys.end()){ cnt++;
            break;
            }
        }
       }
       int ans=words.size()-cnt;
       return ans;

        
    }
};