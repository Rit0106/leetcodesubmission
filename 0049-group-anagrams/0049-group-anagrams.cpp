class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& words) {  
        unordered_map<string, vector<string>> anagramGroups;

        for (string word : words) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            anagramGroups[sortedWord].push_back(word);
        }

        vector<vector<string>> result;
        for (auto group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
        
    
};