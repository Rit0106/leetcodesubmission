class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<char> vowels;
        for(char c:s){
            if(isvowel(c)){
                vowels.push_back(c);

            }
        }
        sort(vowels.begin(),vowels.end());

        int vindex=0;
        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                s[i]=vowels[vindex++];
            }
        }
        return s;
        
    }

    private:
    bool isvowel(char c){
        return string("AEIOUaeiou").find(c) !=string:: npos;
    }
};