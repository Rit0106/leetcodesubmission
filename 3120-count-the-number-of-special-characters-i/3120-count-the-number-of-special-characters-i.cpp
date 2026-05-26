class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int cnt=0;
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(char ch:word){
            if(ch>='a' && ch<='z'){
                lower[ch-'a']=1;
            }
             if(ch>='A' && ch<='Z'){
                upper[ch-'A']=1;
            }
        }
        for(int i=0;i<26;i++){
            if(lower[i]&&upper[i])
                cnt++;
        }
        return cnt;

        
    }
};