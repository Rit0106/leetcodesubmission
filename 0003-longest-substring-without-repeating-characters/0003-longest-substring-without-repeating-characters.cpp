class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maximum = 1;
        unordered_map<char,int>umap;
       if(s.length()==0){
        return 0;
       }

        for(int i =0;i<s.length();i++)
    {    umap[s[i]]++;
       while(umap[s[i]]>1){
            umap[s[left]]--;
              left++;
        }
        maximum = max(maximum,i-left+1);
    }
    return maximum;
    }
};