class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int capital=0;
        for(char ch:word){
            if(isupper(ch)){
                capital++;
            }
        }
        if(capital==n){
            return true;

        }
        else if(capital==0){
            return true;
        }
        else if(capital==1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};