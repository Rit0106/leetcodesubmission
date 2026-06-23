class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int maximum = 1;
        unordered_map<char,int>umap;
       if(n==0){
        return 0;
       }
        for(int i=0;i<n;i++)
            {   umap[s[i]]++;
                while(umap[s[i]]>1){
                umap[s[left]]--;
                left++;
            }
            maximum = max(maximum,i-left+1);
            }
        return maximum;
    }
};