/*
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.length();
        int i = 0;

        // Step 1: Extract words ignoring extra spaces
        while (i < n) {
            while (i < n && s[i] == ' ') i++; // Skip spaces
            if (i >= n) break;
            int j = i;
            while (j < n && s[j] != ' ') j++; // Find word
            words.push_back(s.substr(i, j - i));
            i = j;
        }

        // Step 2: Reverse the vector of words
        reverse(words.begin(), words.end());

        // Step 3: Join them with single space
        string result;
        for (int k = 0; k < words.size(); k++) {
            result += words[k];
            if (k != words.size() - 1)
                result += ' ';
        }

        return result;
    }
};
*/

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++){
            string word="";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin() ,word.end());
            if(word.size()>0){
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};